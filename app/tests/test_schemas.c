#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define SCHEMA_CAPACITY 131072u
#define PATH_CAPACITY 512u

static char schema_text[SCHEMA_CAPACITY];
static const char *cursor;
static const char *limit;
static char current_directory[PATH_CAPACITY];
static int parse_error;

static void skip_space(void)
{
    while (cursor < limit && isspace((unsigned char)*cursor)) {
        ++cursor;
    }
}

static int parse_string(char *output, size_t capacity)
{
    size_t length = 0u;
    if (cursor >= limit || *cursor++ != '"') return 0;
    while (cursor < limit && *cursor != '"') {
        char value = *cursor++;
        if ((unsigned char)value < 0x20u) return 0;
        if (value == '\\') {
            if (cursor >= limit) return 0;
            value = *cursor++;
            if (value == 'u') {
                unsigned index;
                for (index = 0u; index < 4u; ++index) {
                    if (cursor >= limit || !isxdigit((unsigned char)*cursor++)) {
                        return 0;
                    }
                }
                value = '?';
            } else if (strchr("\"\\/bfnrt", value) == NULL) {
                return 0;
            }
        }
        if (output != NULL && length + 1u < capacity) output[length] = value;
        ++length;
    }
    if (cursor >= limit || *cursor++ != '"') return 0;
    if (output != NULL) {
        if (length >= capacity) return 0;
        output[length] = '\0';
    }
    return 1;
}

static int reference_exists(const char *reference)
{
    char path[PATH_CAPACITY];
    size_t directory_length;
    size_t reference_length = 0u;
    FILE *file;
    if (reference[0] == '#' || strstr(reference, "://") != NULL) return 1;
    while (reference[reference_length] != '\0' &&
           reference[reference_length] != '#') {
        ++reference_length;
    }
    directory_length = strlen(current_directory);
    if (directory_length + reference_length + 1u >= sizeof(path)) return 0;
    memcpy(path, current_directory, directory_length);
    memcpy(path + directory_length, reference, reference_length);
    path[directory_length + reference_length] = '\0';
    file = fopen(path, "rb");
    if (file == NULL) return 0;
    fclose(file);
    return 1;
}

static void parse_value(void);

static void parse_array(void)
{
    ++cursor;
    skip_space();
    if (cursor < limit && *cursor == ']') { ++cursor; return; }
    while (!parse_error) {
        parse_value();
        skip_space();
        if (cursor < limit && *cursor == ']') { ++cursor; return; }
        if (cursor >= limit || *cursor++ != ',') { parse_error = 1; return; }
        skip_space();
    }
}

static void parse_object(void)
{
    char key[128];
    ++cursor;
    skip_space();
    if (cursor < limit && *cursor == '}') { ++cursor; return; }
    while (!parse_error) {
        if (!parse_string(key, sizeof(key))) { parse_error = 1; return; }
        skip_space();
        if (cursor >= limit || *cursor++ != ':') { parse_error = 1; return; }
        skip_space();
        if (strcmp(key, "$ref") == 0) {
            char reference[PATH_CAPACITY];
            if (!parse_string(reference, sizeof(reference)) ||
                !reference_exists(reference)) {
                parse_error = 1;
                return;
            }
        } else {
            parse_value();
        }
        skip_space();
        if (cursor < limit && *cursor == '}') { ++cursor; return; }
        if (cursor >= limit || *cursor++ != ',') { parse_error = 1; return; }
        skip_space();
    }
}

static void parse_number(void)
{
    if (cursor < limit && *cursor == '-') ++cursor;
    if (cursor >= limit || !isdigit((unsigned char)*cursor)) {
        parse_error = 1;
        return;
    }
    if (*cursor == '0') ++cursor;
    else while (cursor < limit && isdigit((unsigned char)*cursor)) ++cursor;
    if (cursor < limit && *cursor == '.') {
        ++cursor;
        if (cursor >= limit || !isdigit((unsigned char)*cursor)) {
            parse_error = 1;
            return;
        }
        while (cursor < limit && isdigit((unsigned char)*cursor)) ++cursor;
    }
    if (cursor < limit && (*cursor == 'e' || *cursor == 'E')) {
        ++cursor;
        if (cursor < limit && (*cursor == '+' || *cursor == '-')) ++cursor;
        if (cursor >= limit || !isdigit((unsigned char)*cursor)) {
            parse_error = 1;
            return;
        }
        while (cursor < limit && isdigit((unsigned char)*cursor)) ++cursor;
    }
}

static void parse_value(void)
{
    skip_space();
    if (cursor >= limit) { parse_error = 1; return; }
    if (*cursor == '{') parse_object();
    else if (*cursor == '[') parse_array();
    else if (*cursor == '"') {
        if (!parse_string(NULL, 0u)) parse_error = 1;
    } else if (*cursor == '-' || isdigit((unsigned char)*cursor)) parse_number();
    else if ((size_t)(limit - cursor) >= 4u && strncmp(cursor, "true", 4u) == 0) cursor += 4;
    else if ((size_t)(limit - cursor) >= 5u && strncmp(cursor, "false", 5u) == 0) cursor += 5;
    else if ((size_t)(limit - cursor) >= 4u && strncmp(cursor, "null", 4u) == 0) cursor += 4;
    else parse_error = 1;
}

static int validate_json(const char *path, int require_schema_declaration)
{
    FILE *file = fopen(path, "rb");
    size_t length;
    const char *slash;
    if (file == NULL) return 0;
    length = fread(schema_text, 1u, sizeof(schema_text) - 1u, file);
    if (ferror(file) || !feof(file)) { fclose(file); return 0; }
    fclose(file);
    schema_text[length] = '\0';
    if (require_schema_declaration && strstr(schema_text,
        "\"$schema\": \"https://json-schema.org/draft/2020-12/schema\"") == NULL) {
        return 0;
    }
    slash = strrchr(path, '/');
    if (slash == NULL || (size_t)(slash - path + 2) > sizeof(current_directory)) {
        return 0;
    }
    memcpy(current_directory, path, (size_t)(slash - path + 1));
    current_directory[slash - path + 1] = '\0';
    cursor = schema_text;
    limit = schema_text + length;
    parse_error = 0;
    parse_value();
    skip_space();
    return !parse_error && cursor == limit;
}

static int contains_all_keys(const char *const *keys, size_t count)
{
    size_t index;
    for (index = 0u; index < count; ++index) {
        if (strstr(schema_text, keys[index]) == NULL) return 0;
    }
    return 1;
}

static int validate_contract_instance(const char *path,
                                      const char *const *specific_keys,
                                      size_t specific_count)
{
    static const char *common_keys[] = {
        "\"contract_id\"", "\"schema_version\": \"0.2.0\"",
        "\"contract_version\": \"0.2.0\"",
        "\"theory_version\"", "\"status\"", "\"authority\"",
        "\"construct_refs\"", "\"scope\"", "\"prohibited_interpretations\"",
        "\"identifier_status\": \"unratified\"", "\"canonical_id\": null"
    };
    return validate_json(path, 0) &&
        contains_all_keys(common_keys,
                          sizeof(common_keys) / sizeof(common_keys[0])) &&
        contains_all_keys(specific_keys, specific_count);
}

static int validate_study_fixture(const char *path, int expected_complete)
{
    static const char *required_keys[] = {
        "\"study_id\"", "\"schema_version\"", "\"study_version\"",
        "\"theory_version\"", "\"protocol_ref\"", "\"contract_refs\"",
        "\"scope\"", "\"construct_refs\"", "\"participants\"",
        "\"environments\"", "\"interaction_episodes\"", "\"states\"",
        "\"records\"", "\"coded_events\"", "\"behavioral_traces\"",
        "\"measures\"", "\"uncertainties\""
    };
    int complete;
    if (!validate_json(path, 0)) return 0;
    complete = contains_all_keys(required_keys,
        sizeof(required_keys) / sizeof(required_keys[0]));
    return complete == expected_complete;
}

int main(void)
{
    static const char *files[] = {
        "../docs/04_Reference/Templates/Contract_Common.schema.json",
        "../docs/04_Reference/Templates/Projection_Contract.schema.json",
        "../docs/04_Reference/Templates/Opportunity_Contract.schema.json",
        "../docs/04_Reference/Templates/Interaction_Contract.schema.json",
        "../docs/04_Reference/Templates/Behavioral_Evidence_Contract.schema.json",
        "../docs/04_Reference/Templates/Measurement_Contract.schema.json",
        "../docs/04_Reference/Templates/Similarity_Contract.schema.json",
        "../docs/04_Reference/Templates/Transfer_Contract.schema.json",
        "../docs/04_Reference/Templates/Strategy_Contract.schema.json",
        "../docs/04_Reference/Templates/Prediction_Contract.schema.json",
        "../docs/04_Reference/Templates/Comparison_Contract.schema.json",
        "../docs/04_Reference/Dataset_Schema/interaction_study.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/common.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/participant.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/environment.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/interaction-episode.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/interaction-contract.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/projection-contract.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/measurement-contract.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/raw-record.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/coded-event.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/behavioral-trace.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/opportunity-profile.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/measure.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/uncertainty.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/similarity-profile.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/transfer-record.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/strategy-hypothesis.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/prediction-record.schema.json",
        "../docs/04_Reference/Dataset_Schema/schemas/comparison-profile.schema.json",
        "../docs/01_Knowledge_System_of_Record/10_Governance/consent-record.schema.json"
    };
    static const char *projection_keys[] = {
        "\"target_ref\"", "\"target_host\"", "\"modality\"",
        "\"mapping_rule\"", "\"interpretation_assumptions\"",
        "\"preserved_properties\"", "\"transformed_properties\"",
        "\"omitted_properties\"", "\"introduced_properties\"",
        "\"exposed_operations\"", "\"signifiers\"",
        "\"feedback_channels\"", "\"observer_class\"", "\"intended_use\"",
        "\"tolerances\"", "\"uncertainty_refs\"", "\"failure_conditions\""
    };
    static const char *opportunity_keys[] = {
        "\"system_ref\"", "\"participant_ref\"", "\"action_ref\"",
        "\"action_vocabulary_ref\"", "\"projection_ref\"",
        "\"task_ref\"", "\"authority_ref\"",
        "\"state_ref\"", "\"time_basis\"", "\"relation_definitions\"",
        "\"domain_valid\"", "\"capable\"", "\"permitted\"", "\"enabled\"",
        "\"reachable\"", "\"exposed\"", "\"signaled\"",
        "\"believed_available\"", "\"selected\"", "\"executed\"",
        "\"successful\"", "\"reversible\"", "\"evidence_requirements\"",
        "\"expected_consequence_definition\"", "\"recovery_definition\"",
        "\"uncertainty_requirements\""
    };
    static const char *interaction_keys[] = {
        "\"participant_refs\"", "\"environment_refs\"", "\"boundary\"",
        "\"timescale\"", "\"initiation_conditions\"",
        "\"initial_state_ref\"", "\"coupling_relations\"", "\"preconditions\"",
        "\"perturbation_conditions\"", "\"uptake_conditions\"",
        "\"postconditions\"",
        "\"event_types\"", "\"transition_semantics_ref\"", "\"protocol\"",
        "\"invariants\"", "\"evidence_requirements\"",
        "\"failure_conditions\"", "\"recovery_conditions\"",
        "\"completion_conditions\"", "\"episode_identity_rule\"",
        "\"provenance_requirements\"", "\"uncertainty_assumptions\""
    };
    static const char *behavioral_keys[] = {
        "\"raw_source_refs\"", "\"instrument_refs\"",
        "\"observation_model\"", "\"detection_rules\"",
        "\"event_coding_rules\"",
        "\"segmentation_rules\"", "\"attribution_rules\"",
        "\"ordering_rule\"", "\"missingness_rules\"",
        "\"alternative_explanations\"", "\"uncertainty_model_ref\"",
        "\"falsifying_evidence\"", "\"claim_limits\"",
        "\"review_requirements\"", "\"evidence_lineage_rule\"",
        "\"provenance_requirements\""
    };
    static const char *measurement_keys[] = {
        "\"measurand\"", "\"unit\"", "\"level_of_analysis\"",
        "\"observation_model\"", "\"instrument_ref\"",
        "\"operationalization\"", "\"coding_rules\"", "\"estimator\"",
        "\"scale_type\"", "\"permissible_transformations\"",
        "\"permissible_comparisons\"", "\"permitted_interpretations\"",
        "\"uncertainty_model_ref\"", "\"uncertainty_budget\"",
        "\"reliability_evidence_requirements\"",
        "\"validity_evidence_requirements\"", "\"comparison_scope\"",
        "\"missingness_rules\""
    };
    struct InstanceSpec {
        const char *path;
        const char *const *specific_keys;
        size_t specific_count;
    };
    static const struct InstanceSpec instances[] = {
        { "examples/studies/CIS-EX-008/contracts/projection-signaled.json", projection_keys, sizeof(projection_keys) / sizeof(projection_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/projection-unsignaled.json", projection_keys, sizeof(projection_keys) / sizeof(projection_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/opportunity.json", opportunity_keys, sizeof(opportunity_keys) / sizeof(opportunity_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/interaction.json", interaction_keys, sizeof(interaction_keys) / sizeof(interaction_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/behavioral-evidence.json", behavioral_keys, sizeof(behavioral_keys) / sizeof(behavioral_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/measurement-discovery.json", measurement_keys, sizeof(measurement_keys) / sizeof(measurement_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/measurement-invalid-attempt.json", measurement_keys, sizeof(measurement_keys) / sizeof(measurement_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/measurement-recovery.json", measurement_keys, sizeof(measurement_keys) / sizeof(measurement_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/measurement-completion.json", measurement_keys, sizeof(measurement_keys) / sizeof(measurement_keys[0]) },
        { "examples/studies/CIS-EX-008/contracts/measurement-belief.json", measurement_keys, sizeof(measurement_keys) / sizeof(measurement_keys[0]) }
    };
    size_t index;
    for (index = 0u; index < sizeof(files) / sizeof(files[0]); ++index) {
        if (!validate_json(files[index], 1)) {
            printf("FAIL schema: %s\n", files[index]);
            return 1;
        }
    }
    for (index = 0u; index < sizeof(instances) / sizeof(instances[0]); ++index) {
        if (!validate_contract_instance(instances[index].path,
                                        instances[index].specific_keys,
                                        instances[index].specific_count)) {
            printf("FAIL contract instance: %s\n", instances[index].path);
            return 1;
        }
    }
    if (!validate_study_fixture(
            "examples/studies/CIS-EX-008/data/valid-synthetic-study.json", 1) ||
        !validate_study_fixture(
            "examples/studies/CIS-EX-008/data/invalid-missing-environment.json", 0)) {
        puts("FAIL study dataset fixtures");
        return 1;
    }
    printf("PASS: %u JSON schemas and local references; %u identified contract instances; valid/invalid study fixtures\n",
           (unsigned)(sizeof(files) / sizeof(files[0])), (unsigned)index);
    return 0;
}

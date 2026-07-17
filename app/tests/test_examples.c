#include <stdio.h>
#include <string.h>

#define SOURCE_CAPACITY 32768u
#define ESCAPED_CAPACITY 131072u
#define RENDERED_CAPACITY 131072u

static char source[SOURCE_CAPACITY];
static char escaped[ESCAPED_CAPACITY];
static char rendered[RENDERED_CAPACITY];

static int read_file(const char *path, char *buffer, size_t capacity,
                     size_t *length_out)
{
    FILE *file = fopen(path, "rb");
    size_t length;
    if (file == NULL) {
        return 0;
    }
    length = fread(buffer, 1u, capacity - 1u, file);
    if (ferror(file) || !feof(file)) {
        fclose(file);
        return 0;
    }
    fclose(file);
    buffer[length] = '\0';
    *length_out = length;
    return 1;
}

static int append_text(char *target, size_t capacity, size_t *length,
                       const char *text)
{
    size_t index = 0u;
    while (text[index] != '\0') {
        if (*length + 1u >= capacity) {
            return 0;
        }
        target[(*length)++] = text[index++];
    }
    return 1;
}

static int html_escape(const char *input, size_t input_length,
                       char *output, size_t capacity)
{
    size_t input_index;
    size_t output_length = 0u;
    for (input_index = 0u; input_index < input_length; ++input_index) {
        const char *replacement = NULL;
        char literal[2] = {input[input_index], '\0'};
        switch (input[input_index]) {
        case '&': replacement = "&amp;"; break;
        case '<': replacement = "&lt;"; break;
        case '>': replacement = "&gt;"; break;
        case '"': replacement = "&quot;"; break;
        case '\'': replacement = "&#x27;"; break;
        default: replacement = literal; break;
        }
        if (!append_text(output, capacity, &output_length, replacement)) {
            return 0;
        }
    }
    output[output_length] = '\0';
    return 1;
}

static int verify_pair(const char *source_path, const char *rendered_path)
{
    size_t source_length;
    size_t rendered_length;
    if (!read_file(source_path, source, sizeof(source), &source_length) ||
        !read_file(rendered_path, rendered, sizeof(rendered), &rendered_length) ||
        rendered_length == 0u ||
        !html_escape(source, source_length, escaped, sizeof(escaped)) ||
        strstr(rendered, escaped) == NULL) {
        return 0;
    }
    return 1;
}

static int verify_interaction_claim_boundaries(void)
{
    size_t source_length;
    if (!read_file(
            "examples/visualizations/src/interaction-substrate-lab.html",
            source, sizeof(source), &source_length)) {
        return 0;
    }
    return source_length > 0u &&
        strstr(source,
            "const systemExecutable = current.domain && current.capable && current.permitted && current.enabled;") != NULL &&
        strstr(source,
            "const projectedAvailable = systemExecutable && current.exposed;") != NULL &&
        strstr(source,
            "event.executed && event.outcome === 'failure') ? false : null") != NULL &&
        strstr(source,
            "Participant belief matches projected availability") != NULL;
}

int main(void)
{
    if (!verify_pair(
            "examples/visualizations/src/interaction-substrate-lab.html",
            "examples/visualizations/interaction-substrate-lab.html") ||
        !verify_pair(
            "examples/visualizations/src/projection-invariance-workbench.html",
            "examples/visualizations/projection-invariance-workbench.html") ||
        !verify_pair(
            "examples/visualizations/src/evidence-inference-ladder.html",
            "examples/visualizations/evidence-inference-ladder.html") ||
        !verify_interaction_claim_boundaries()) {
        puts("FAIL: identified standalone output is missing or stale");
        return 1;
    }
    puts("PASS: identified example sources and generated output");
    return 0;
}

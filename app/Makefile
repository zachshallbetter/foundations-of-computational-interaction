CC ?= cc
CFLAGS ?= -std=c11 -O2 -Wall -Wextra -Wpedantic -Werror
CPPFLAGS ?= -Iinclude
FREESTANDING_FLAGS := -ffreestanding -fno-builtin -fno-stack-protector

BUILD := build
LIB_OBJECT := $(BUILD)/cis.o

.PHONY: all test demo conformance benchmarks verify-object verify-examples clean

all: verify-examples $(BUILD)/libcis.a $(BUILD)/test_cis $(BUILD)/test_stress $(BUILD)/test_examples $(BUILD)/test_schemas $(BUILD)/door $(BUILD)/projection-benchmark $(BUILD)/overclaim-benchmark

$(BUILD):
	mkdir -p $(BUILD)

$(LIB_OBJECT): src/cis.c include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) $(FREESTANDING_FLAGS) -c src/cis.c -o $@

$(BUILD)/libcis.a: $(LIB_OBJECT)
	ar rcs $@ $^

$(BUILD)/test_cis: tests/test_cis.c $(LIB_OBJECT) include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) tests/test_cis.c $(LIB_OBJECT) -o $@

$(BUILD)/test_stress: tests/test_stress.c $(LIB_OBJECT) include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) tests/test_stress.c $(LIB_OBJECT) -o $@

$(BUILD)/test_examples: tests/test_examples.c | $(BUILD)
	$(CC) $(CFLAGS) tests/test_examples.c -o $@

$(BUILD)/test_schemas: tests/test_schemas.c | $(BUILD)
	$(CC) $(CFLAGS) tests/test_schemas.c -o $@

$(BUILD)/door: examples/door.c $(LIB_OBJECT) include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) examples/door.c $(LIB_OBJECT) -o $@

$(BUILD)/conformance: examples/conformance.c $(LIB_OBJECT) include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) examples/conformance.c $(LIB_OBJECT) -o $@

$(BUILD)/projection-benchmark: examples/benchmarks/projection-benchmark.c $(LIB_OBJECT) include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) examples/benchmarks/projection-benchmark.c $(LIB_OBJECT) -o $@

$(BUILD)/overclaim-benchmark: examples/benchmarks/overclaim-benchmark.c $(LIB_OBJECT) include/cis.h | $(BUILD)
	$(CC) $(CPPFLAGS) $(CFLAGS) examples/benchmarks/overclaim-benchmark.c $(LIB_OBJECT) -o $@

verify-object: $(LIB_OBJECT)
	test -z "$$(nm -u $(LIB_OBJECT))"

verify-examples:
	test -f examples/manifest.csv
	test -f examples/README.md
	test -f examples/visualizations/src/interaction-substrate-lab.html
	test -f examples/visualizations/interaction-substrate-lab.html
	test -f examples/visualizations/src/projection-invariance-workbench.html
	test -f examples/visualizations/projection-invariance-workbench.html
	test -f examples/visualizations/src/evidence-inference-ladder.html
	test -f examples/visualizations/evidence-inference-ladder.html
	test -f ../docs/04_Reference/Figures/FIG-001_Concept_Dependency_Graph.dot
	test -f ../docs/04_Reference/Figures/FIG-001_Concept_Dependency_Graph.svg
	test -f ../docs/04_Reference/Figures/FIG-001_Concept_Dependency_Graph.png
	test -f ../docs/04_Reference/Figures/FIG-001_Concept_Dependency_Graph.pdf
	test -f ../docs/04_Reference/Figures/FIG-002_Contract_Architecture.dot
	test -f ../docs/04_Reference/Figures/FIG-002_Contract_Architecture.svg
	test -f ../docs/04_Reference/Figures/FIG-002_Contract_Architecture.png
	test -f ../docs/04_Reference/Figures/FIG-002_Contract_Architecture.pdf
	grep -q 'CIS-EX-001' examples/door.c
	grep -q 'CIS-EX-002' examples/conformance.c
	grep -q 'CIS-EX-003' examples/visualizations/src/interaction-substrate-lab.html
	grep -q 'CIS-EX-003' examples/visualizations/interaction-substrate-lab.html
	grep -q 'CIS-EX-004' examples/visualizations/src/projection-invariance-workbench.html
	grep -q 'CIS-EX-004' examples/visualizations/projection-invariance-workbench.html
	grep -q 'CIS-EX-005' examples/visualizations/src/evidence-inference-ladder.html
	grep -q 'CIS-EX-005' examples/visualizations/evidence-inference-ladder.html
	grep -q 'CIS-EX-006' examples/benchmarks/projection-benchmark.c
	grep -q 'CIS-EX-007' examples/benchmarks/overclaim-benchmark.c
	grep -q 'CIS-EX-008' examples/studies/CIS-EX-008_projection-signaling-study.md
	grep -q 'CIS-EX-001' examples/README.md
	grep -q 'CIS-EX-002' examples/README.md
	grep -q 'CIS-EX-003' examples/README.md
	grep -q 'CIS-EX-004' examples/README.md
	grep -q 'CIS-EX-005' examples/README.md
	grep -q 'CIS-EX-006' examples/README.md
	grep -q 'CIS-EX-007' examples/README.md
	grep -q 'CIS-EX-008' examples/README.md
	grep -q 'CIS-EX-003' examples/PAPER_ALIGNMENT.md
	grep -q 'CIS-EX-004' examples/PAPER_ALIGNMENT.md
	grep -q 'CIS-EX-005' examples/PAPER_ALIGNMENT.md
	grep -q 'CIS-EX-006' examples/PAPER_ALIGNMENT.md
	grep -q 'CIS-EX-007' examples/PAPER_ALIGNMENT.md
	grep -q 'CIS-EX-008' examples/PAPER_ALIGNMENT.md

test: verify-object verify-examples $(BUILD)/test_cis $(BUILD)/test_stress $(BUILD)/test_examples $(BUILD)/test_schemas $(BUILD)/projection-benchmark $(BUILD)/overclaim-benchmark
	./$(BUILD)/test_cis
	./$(BUILD)/test_stress
	./$(BUILD)/test_examples
	./$(BUILD)/test_schemas
	./$(BUILD)/projection-benchmark
	./$(BUILD)/overclaim-benchmark

demo: $(BUILD)/door
	./$(BUILD)/door

conformance: $(BUILD)/conformance
	./$(BUILD)/conformance

benchmarks: $(BUILD)/projection-benchmark $(BUILD)/overclaim-benchmark
	./$(BUILD)/projection-benchmark
	./$(BUILD)/overclaim-benchmark

clean:
	rm -rf $(BUILD)

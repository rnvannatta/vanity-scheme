.PHONY : clean deps cleandeps compiler interpreter windows_interpreter runtime windows_runtime wasm_runtime install tests tests_linux tests_windows config lay_egg boot_dirs preflight preflight_boot preflight_stage1 preflight_stage2 preflight_tests preflight_quick preflight_clean

all :

boot_dirs :
	mkdir -p bin/bootstrap/src
	mkdir -p bin/bootstrap/runtime

lay_egg : boot_dirs

hatch :
	@$(MAKE) clean --no-print-directory --no-builtin-rules
	@$(MAKE) $@ -f Makefile.bootstrap --no-print-directory --no-builtin-rules
	@$(MAKE) clean --no-print-directory --no-builtin-rules

preflight preflight_boot preflight_stage1 preflight_stage2 preflight_tests preflight_quick preflight_clean :
	@$(MAKE) $@ -f Makefile.preflight --no-print-directory --no-builtin-rules

define build_dispatch
@mkdir -p lib bin/bootstrap/vanity/compiler bin/bootstrap/scheme build/vanity/compiler build/scheme
@if ! $(MAKE) deps -f Makefile.all --no-print-directory --no-builtin-rules; \
then \
	$(MAKE) cleandeps --no-print-directory --no-builtin-rules; \
	$(MAKE) deps -f Makefile.all --no-print-directory --no-builtin-rules; \
fi
@$(MAKE) headers -f Makefile.headers --no-print-directory --no-builtin-rules
@$(MAKE) $@ -f Makefile.all --no-print-directory --no-builtin-rules
endef

all deps compiler interpreter windows_interpreter runtime windows_runtime wasm_runtime install tests tests_linux tests_windows lay_egg : Makefile.all
	$(build_dispatch)

# single-test targets, e.g. `make testrun_linux/vector.scm`
testrun_linux/% testrun_windows/% : Makefile.all
	$(build_dispatch)

clean :
	-\rm -rf bin/* build/*
	-\rm -f test_bin/*
	-\rm -rf lib/*
	-\rm -rf preflight/*

cleandeps :
	-find build -type f -name '*.d' -exec \rm -f {} +

Makefile.all : config.mk
	$(MAKE) clean --no-print-directory
	touch Makefile.all


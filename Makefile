.PHONY : clean deps cleandeps compiler interpreter runtime windows_runtime install tests tests_linux tests_windows config lay_egg boot_dirs testffi

boot_dirs :
	mkdir -p bin/bootstrap/src
	mkdir -p bin/bootstrap/runtime

lay_egg : boot_dirs

hatch :
	@$(MAKE) clean --no-print-directory --no-builtin-rules
	@$(MAKE) $@ -f Makefile.bootstrap --no-print-directory --no-builtin-rules
	@$(MAKE) clean --no-print-directory --no-builtin-rules

all compiler interpreter runtime windows_runtime deps install tests tests_linux tests_windows lay_egg testffi : Makefile.all
	@mkdir -p lib bin/bootstrap/vanity/compiler bin/bootstrap/scheme build/vanity/compiler build/scheme
	@if ! $(MAKE) deps -f Makefile.all --no-print-directory --no-builtin-rules; \
	then \
		$(MAKE) cleandeps --no-print-directory --no-builtin-rules; \
		$(MAKE) deps -f Makefile.all --no-print-directory --no-builtin-rules; \
	fi
	@$(MAKE) headers -f Makefile.headers --no-print-directory --no-builtin-rules
	@$(MAKE) $@ -f Makefile.all --no-print-directory --no-builtin-rules

clean :
	-\rm -rf bin/* build/*
	-\rm -f test_bin/*
	-\rm -rf lib/*

cleandeps :
	-find build -type f -name '*.d' -exec \rm -f {} +

Makefile.all : config.mk
	$(MAKE) clean --no-print-directory
	touch Makefile.all


.PHONY : clean deps cleandeps compiler runtime install tests config lay_egg hatch

compiler runtime deps install tests lay_egg hatch : Makefile.all
	@mkdir -p bin bin/bootstrap lib build
	@if ! $(MAKE) deps -f Makefile.all --no-print-directory; \
	then \
		$(MAKE) cleandeps --no-print-directory --no-builtin-rules; \
		$(MAKE) deps -f Makefile.all --no-print-directory --no-builtin-rules; \
	fi
	@$(MAKE) $@ -f Makefile.all --no-print-directory --no-builtin-rules

clean :
	-/bin/rm -rf bin/* build/*
	-/bin/rm -f test_bin/*
	-/bin/rm -f lib/*

cleandeps :
	-/bin/rm -f build/*.d

Makefile.all : config.mk
	$(MAKE) clean --no-print-directory
	touch Makefile.all


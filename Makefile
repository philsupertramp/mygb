.PHONY: lint

lint:
	find . -regex '.*\.\(cpp\|hpp\|cc\|cxx\|h\)' -exec clang-format -i {} \;

.PHONY: build
build:
	mkdir -p build/; \
	cd build/; \
	cmake -- ../.; \
       make -j $(nproc);	

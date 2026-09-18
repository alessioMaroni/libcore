.PHONY: all clean

all: build/test run/test

build/test: test.c | build
	gcc -c test.c -o build/test.o
	gcc build/test.o -o build/test

run/test:
	./build/test

build:
	mkdir -p build

clean:
	rm -rf build


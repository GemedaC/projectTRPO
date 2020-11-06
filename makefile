all: hello

hello: main.o test.o

main.o:
	g++ src/main.cpp -o main
test.o:
	g++ test/UnitTestCalc.cpp -o testing
test:
	.test/testing
run:
	.src/main

.PHONY: clean

clean:
	rm -rf *.o

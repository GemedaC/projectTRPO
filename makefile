all: hello

hello: main.o

main.o:
	g++ src/main.cpp -o main
test.o
	g++ test/UnitTestCalc.cpp -o test
	
run:
	main

.PHONY: clean

clean:
	rm -rf *.o

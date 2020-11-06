all: hello

hello: main.o test.o

main.o:
	g++ src/main.cpp -o main
run:
	.src/main

.PHONY: clean

clean:
	rm -rf *.o

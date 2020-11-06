all: hello

hello: main.o

main.o:
	g++ src/main.cpp -o main
	
run:
	main

.PHONY: clean

clean:
	rm -rf *.o

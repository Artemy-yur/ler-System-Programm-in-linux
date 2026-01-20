all: din_lib

exe:
	gcc -o hello.o -c hello.c
	gcc -o main.o -c main.c

	gcc -o hello main.o hello.o


lib:
	gcc -o libhello.so  -shared hello.c 

din_lib:
	export LD_LIBRARY_PATH=.
	gcc main.c -L. -lhello -o hi
	./hi

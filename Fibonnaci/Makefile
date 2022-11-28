
all: mylib.o
	gcc -o main.out main.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out time_complexity.c mylib.o
	gcc -o mainI.out time_complexityI.c mylib.o

space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o SpaceRecursive.out SpaceRecursive.c mylib.o
	gcc -o SpaceIterative.out SpaceIterative.c mylib.o

clear:
	rm -rf *.out
	rm -rf *.o


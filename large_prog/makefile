main:	main.c lib1.o lib2.o
		gcc -g -Wall main.c lib1.o lib2.o -o main

lib1.o:	lib1.h lib1.c
		gcc -g -Wall -c lib1.c

lib2.o: lib2.h lib2.c
		gcc -g -Wall -c lib2.c
all: prog

prog: main.o func.o
	gcc -o prog main.o func.o

main.o: main.c mylibrary.h
	gcc -c -o main.o main.c

func.o: func.c
	gcc -c -o func.o func.c

clean:
	del *.o
	del prog.exe

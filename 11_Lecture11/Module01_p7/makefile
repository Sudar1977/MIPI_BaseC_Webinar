all: prog

prog: main.o func.o
	gcc -g -o main main.o func.o

main.o: main.c
	gcc -g -c -o main.o main.c

func.o: func.c
	gcc -g -c -o func.o func.c

clean:
	del *.o
	del prog.exe

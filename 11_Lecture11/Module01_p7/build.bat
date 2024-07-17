 chcp 1251
 gcc -c --std=c99 -o main.o main.c
 gcc -c --std=c99 -o func.o func.c
 gcc -o prog func.o main.o
 pause
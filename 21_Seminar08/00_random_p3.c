#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x;
    printf("MAX RANDOM = %d\n",RAND_MAX); //2147483647
    // Задать начальное значение последовательности
    srand(123); // одни и те же числа, seed задан константно
    //~ srand( time(NULL) ); // числа меняются при каждом запуске программы    
    //Случайное целое число в интервале [0, RAND_MAX]
    x = rand();
    printf("x = %d\n",x); // первое случайное число
    x = rand();
    printf("x = %d\n",x); // другое случайное число
    return 0;
}

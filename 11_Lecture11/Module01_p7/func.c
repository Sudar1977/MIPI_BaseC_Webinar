#include <stdio.h>
extern int m; // Глобальная переменная. Видна из обоих файлов

int max(int a, int b)
{
    m=5;
    printf("m=%d\n",m);    
    return a>b? a : b;
}

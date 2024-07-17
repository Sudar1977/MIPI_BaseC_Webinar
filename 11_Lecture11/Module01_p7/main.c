#include <stdio.h>

extern int max(int, int);  // Функция описана в др файле
int m; // Глобальная переменная. Видна из обоих файлов

int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    m = max(a,b);
    printf("max(%d %d) = %d\n",a,b,m);
    return 0;
}

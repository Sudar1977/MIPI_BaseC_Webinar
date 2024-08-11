#include <stdio.h>

int max(int, int);  // Функция описана в др файле
int m=0; // Глобальная переменная. Видна из обоих файлов

int main(void)
{
    int a,b;
    scanf("%d%d",&a,&b);
    
    printf("max(%d %d)=%d \n",a,b,max(a,b));
    printf("m=%d\n",m);

    return 0;
}

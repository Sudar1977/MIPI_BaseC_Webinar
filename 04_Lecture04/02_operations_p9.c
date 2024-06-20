#include <stdio.h>
#include <inttypes.h>

int main()
{
    int a, b=5, n=0;
    a = ( n!=0 && b/n ); // Нет ошибки - деления на ноль
    printf("%d %d",a,b);
    return 0;
}

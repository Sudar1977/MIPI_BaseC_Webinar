#include <stdio.h>

void max(void)
{
    int a,b; //локальные переменные
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
}

int main ()
{
    max();
    return 0;
}


#include <stdio.h>

int max(int a,int b)
{
    return a>b ? a : b;
}

int main()
{
    int a,b;
    scanf ("%d%d", &a,&b);
    switch (max(a,b))
    {
    case 2:
        printf("case 2:\n");
        a *= 2 ; // Если expr == 2, то выполнится a += 5; из следующей  ветки
    //~ break;
    case 3:
        a += 5;
    break; // А здесь произойдет выход
    case 4:
        a -= b;
    break;
    default:
        break;
    }
    printf("%d", a);
    return 0; //Завершить программу успешно
}


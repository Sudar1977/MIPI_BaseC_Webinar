#include <stdio.h>

//Рекурсивный способ:
int sumRec(int num) 
{
    if (num > 0)
        return num % 10 + sumRec(num / 10);
    else
        return 0;
}

int main() 
{
    int numb;
    scanf("%d",&numb);
    printf("%d\n",sumRec(numb));
    return 0;
}

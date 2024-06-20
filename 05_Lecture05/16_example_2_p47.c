#include <stdio.h>

int main()
{
    int sum=0;
    // переменная i видна только внутри for
    for(int i=0; i<5; i++) {
        sum+=i;
    }
    printf("%d\n",i); //ошибка
    return 0;
}

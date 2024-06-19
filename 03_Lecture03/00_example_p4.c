#include <stdio.h>

int main()
{
    int i, sum=0;
    for (i=1; i<10; i++)
        sum*=i;
    printf("%d",sum);
    return 0;
}

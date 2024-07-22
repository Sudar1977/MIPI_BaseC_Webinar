#include <stdio.h>

#define SUM(a,b) ((a) + (b))

int main(void)
{
    int a=5, b;
    b = SUM(a,3) * 10 ;
    printf("a = %d b = %d\n",a, b);
    return 0;
}

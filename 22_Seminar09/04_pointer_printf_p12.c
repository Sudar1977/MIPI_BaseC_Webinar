#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *pa, n=10;
    pa = a+2;
    *pa++ = n+3;
    printf("%d\n",*pa);
    printf("%d %d %d %d %d\n", a[0],a[1],a[2],a[3],a[4]);
    return 0;
}

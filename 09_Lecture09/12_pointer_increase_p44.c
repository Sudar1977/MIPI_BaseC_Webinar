#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *pa, n=1;
    pa = a;
    *pa++ = n+3;
    printf("%d,%d,%d,%d,%d *pa=%d",a[0],a[1],a[2],a[3],a[4],*pa);
    return 0;
}

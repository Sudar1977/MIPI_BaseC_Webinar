#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *pa, n;
    pa = a;
    n = *(pa+2); // a[2]
    //~ n = pa[2];
    printf("n = %d\n", n);
    return 0;
}

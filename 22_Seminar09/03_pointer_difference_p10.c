#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *pa, *qa;
    pa = &a[1];
    qa = &a[3];
    printf("%p - %p = %lld\n",qa,pa, qa-pa);
    return 0;
}

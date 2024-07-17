#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int a[5];
    int *pa;
    pa = a;
    printf("sizeof(a) = %llu\n", sizeof(a));
    printf("size a = %llu\n", sizeof(a)/sizeof(a[0]));
    printf("sizeof(pa) = %llu\n", sizeof(pa));
}

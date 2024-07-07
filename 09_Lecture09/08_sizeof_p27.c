#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int a[5];
    int *pa;
    pa = a;
    printf("sizeof(a) = %u\n", sizeof(a));
    printf("sizeof(pa) = %u\n", sizeof(pa));
}

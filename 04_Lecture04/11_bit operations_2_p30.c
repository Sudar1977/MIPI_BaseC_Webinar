#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int a=0xFFFFFF00;
    a = a | 3;
    printf("a = %x", a);
    // a = ffffff03
}

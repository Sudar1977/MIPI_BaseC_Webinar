#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int a=0xAABBCCFF;
    a = a & ~7;
    printf("a = %x", a);
    // a = aabbccf8
}

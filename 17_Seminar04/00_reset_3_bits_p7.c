#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t a=0xAABBCCFF;
    a = a>>3;
    a = a<<3;
    printf("a = %x", a);
   // a = aabbccf8
    return 0;
}

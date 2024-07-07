#include <stdio.h>
#include <inttypes.h>

int main( )
{
    unsigned int a=0xFFFFFF00, mask=-1;  // mask = 0xffffffff
    //~ mask = mask>>(32 - 2);
    mask = 0b11;
    a = a | mask;
    printf("a = %x", a);
    // a = ffffff03
    return 0;
}

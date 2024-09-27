#include <stdio.h>
#include <inttypes.h>

#define  BIT_ODD  0
#define  BIT_PARITY  1


int main( )
{
    unsigned int a=0xFFFFFF00;
    //~ a = a |((1<<2) - 1); // чтобы не запоминать константу
    a |= (1<<BIT_ODD) | (1<<BIT_PARITY); // чтобы не запоминать константу
    printf("a = %x", a);
    // a = ffffff03
    return 0;
}

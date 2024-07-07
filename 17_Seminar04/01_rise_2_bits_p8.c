#include <stdio.h>
#include <inttypes.h>

int main( )
{
    unsigned int a=0xFFFFFF00;
    a = a |((1<<2) - 1); // чтобы не запоминать константу
    printf("a = %x", a);
    // a = ffffff03
    return 0;
}

#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int mask, n=0xAB; // n = 1010 1011
    printf("n = %x\n", n);
    mask = (1<<5)-1;
    //~ mask = 0x1F;
    //~ mask = 0b11111;
    n = n ^ mask;
    printf("n = %x\n", n);
    // n = b4 1011 0100
}

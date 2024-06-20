#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int mask, n=0xAB; // n = 1010 1011
    mask = (1<<5)-1;
    n = n ^ mask;
    printf("n = %x", n);
    // n = b4 1011 0100
}

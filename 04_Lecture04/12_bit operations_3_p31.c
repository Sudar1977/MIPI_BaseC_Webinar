#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int n=0;
    unsigned char a=0xaa,b=0xbb,c=0xcc,d=0xdd;
    n = a;
    n = (n<<8) | b;
    n = (n<<8) | c;
    n = (n<<8) | d;
    printf("n = %x", n);
    // n = aabbccdd
}

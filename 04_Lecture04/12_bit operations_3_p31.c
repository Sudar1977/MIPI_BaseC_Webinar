#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint32_t n=0;
    uint8_t  a=0xaa,b=0xbb,c=0xcc,d=0xdd;
    n = a;//n=0xaa
    n = (n<<8) | b;//n=0xaa00 | 0xbb = 0xaabb
    n = (n<<8) | c;// 0xaabb00| 0xcc = 0xaabbcc
    n = (n<<8) | d;
    printf("n = %x", n);
    // n = aabbccdd
}

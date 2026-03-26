#include <stdio.h>
#include <inttypes.h>

union intbytes {
    uint32_t number;
    uint8_t bytes[4];
} d;

int main()
{
    d.number = 0x12345678;
    printf ("Number %x",d.number);
    printf(" in memory is: %x %x %x %x\n", d.bytes[0],
    d.bytes[1], d.bytes[2], d.bytes[3]);
    // Number 12345678 in memory is: 78 56 34 12
    uint32_t number = 0x12345678;

    printf(" in memory is: %x\n",(number >> 8)&0xff);

    uint32_t n=0;
    uint8_t  a=0xaa,b=0xbb,c=0xcc,d=0xdd;
    n = a;//n=0xaa
    n = (n<<8) | b;//n=0xaa00 | 0xbb = 0xaabb
    n = (n<<8) | c;// 0xaabb00| 0xcc = 0xaabbcc
    n = (n<<8) | d;
    printf("n = %x\n", n);
    // n = aabbccdd

    union intbytes n1;
    n1.bytes[3] = a;//n=0xaa
    n1.bytes[2] = b;//n=0xaa00 | 0xbb = 0xaabb
    n1.bytes[1] = c;// 0xaabb00| 0xcc = 0xaabbcc
    n1.bytes[0] = d;
    printf("n = %x\n", n1.number);
    // n = aabbccdd



    return 0;
}

#include <stdio.h>
#include <inttypes.h>

int main()
{
    int a=0xaabbccdd;
    a = a>>4; // арифметический сдвиг
    printf("%x\n",a); // faabbccd
}

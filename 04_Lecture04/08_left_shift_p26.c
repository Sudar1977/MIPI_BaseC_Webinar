#include <stdio.h>
#include <inttypes.h>

int main()
{
    int32_t a=0xaabbccdd;
    printf("%x\n",a); // 0aabbccdd
    a >>= 4; // арифметический сдвиг
    printf("%x\n",a); // faabbccd
}

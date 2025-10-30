#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main(void)
{
    uint8_t u = 0xF5; //беззнаковый тип 0b1111 0101
    //u = u >> 1;
    u >>= 1; // сдвиг вправо на 1 бит   0b0111 1010(1)
    printf("u = 0x%" PRIx8 "\n", u);

    return 0;
}

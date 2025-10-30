#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>


int main(void)
{
    int8_t u = 0xF5; //знаковый тип     0b1111 0101
    u >>= 1; // сдвиг вправо на 1 бит   0b1111 1010(0)
    //~ printf("u = 0x%"PRIx8 "\n", u);
    printf("u = 0x%"PRIx8 "\n", u);

    return 0;
}

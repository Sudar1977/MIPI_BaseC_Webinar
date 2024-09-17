#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint32_t u=0xaabbccdd;
    printf("0x%X\n",u); // 0aabbccdd
    u = u>>4; // логический сдвиг
    printf("0x%08X\n",u); // 0aabbccd
    return 0;
}

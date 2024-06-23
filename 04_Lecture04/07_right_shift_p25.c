#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int u=0xaabbccdd;
    printf("%X\n",u); // 0aabbccdd
    u = u>>4; // логический сдвиг
    printf("%0X\n",u); // 0aabbccd
    return 0;
}

#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int u=0xaabbccdd;
    u = u>>4; // логический сдвиг
    printf("%x\n",u); // 0aabbccd
    return 0;
}

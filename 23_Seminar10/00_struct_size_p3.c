#include <stdio.h>
#include <inttypes.h>

struct str1 {
    uint32_t u;
    uint8_t c1;
    int32_t i;
    uint8_t c2;
} s1;

struct str2 {
    uint32_t u;
    int32_t i;
    uint8_t c1;
    uint8_t c2;
} s2;

int main()
{
    printf("Sizeof s1 = %u\n", sizeof(s1));
    printf("Sizeof s2 = %u\n", sizeof(s2));
    return 0;
}

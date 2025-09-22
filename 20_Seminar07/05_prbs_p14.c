#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    uint16_t start = 0x08;
    uint16_t a = start;
    int i;
    for (i = 1;; i++)
    {
        int newbit = (((a >> 14) ^ (a >> 13)) & 1);
        a = ((a << 1) | newbit) & 0x7fff;
        printf("%x\n", a);
        if (a == start)
        {
            printf("repetition period is %d\n", i);
            break;
        }
    }
    return 0;
}


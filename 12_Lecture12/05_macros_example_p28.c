#include <stdio.h>

#define A B + 1
#define B 2

int main(void)
{
    int a;
    a = A + 2;
    printf("a = %d\n", a);
    return 0;
}

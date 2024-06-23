#include <stdio.h>
#include <inttypes.h>

int main()
{
    unsigned int a=5, b=7;
    printf("a = %d, b = %d\n", a,b);
    a = a^b;
    b = a^b;
    a = a^b;
    printf("a = %d, b = %d", a,b);
    // a = 7 b =5
}

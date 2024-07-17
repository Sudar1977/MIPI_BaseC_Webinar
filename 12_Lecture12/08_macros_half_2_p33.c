#include <stdio.h>

#define HALF(x) ((x)/2)

int main(void)
{
    int a=5, b;
    b = HALF(a + 5);
    printf("a = %d b = %d\n",a, b);
    return 0;
}

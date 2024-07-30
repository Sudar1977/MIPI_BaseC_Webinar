#include <stdio.h>

#define SWAP(type,a,b) {type t = a; a = b; b = t;}

int main(void)
{
    int a=5, b=7;
    if (a<b)
        SWAP(int, a,b)
    else
        a = 1000;
    printf("a = %d b = %d\n", a, b);
    return 0;
}

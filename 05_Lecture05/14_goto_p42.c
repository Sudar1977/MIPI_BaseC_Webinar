#include <stdio.h>

int main()
{
    printf("Hello");
    goto skip;
    printf("World");
skip:
    return 0;
}

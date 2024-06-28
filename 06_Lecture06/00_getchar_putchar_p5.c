#include <stdio.h>

int main()
{
    char c;
    while( (c=getchar())!='.')
        putchar(c);
    return 0;
}

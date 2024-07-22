#include <stdio.h>

#define MAX(a,b) ((a)>=(b)?(a):(b))

int main(void)
{
    int a=5, b=7, c;
    c = MAX(a,++b) ;
    printf("c = %d\n",  c);
    return 0;
}

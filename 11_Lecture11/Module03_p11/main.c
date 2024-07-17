#include <stdio.h>
#include "mylibrary.h"

int m;

int main(void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    m = max_3(a,b,c);
    printf("max(%d %d %d) = %d\n", a, b, c, m);
    return 0;
}

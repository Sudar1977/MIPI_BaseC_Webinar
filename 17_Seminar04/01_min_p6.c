#include <stdio.h>

int main(void)
{
    int a=-1, b=-1;
    scanf("%d%d", &a, &b);
    int min = (a < b) ? a : b;
    printf ("min = %d a=%d b=%d\n", min , a, b);
    return 0;
}


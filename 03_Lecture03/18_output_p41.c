#include <stdio.h>

int main(void)
{
    int a=1, b=5, c=123;
    printf ("%d\n", c);
    //123

    printf ("Result: %d\n", c);
    //Result: 123

    printf ("%d+%d=%d\n", a, b, c );
    //1+5=123

    printf ("%d+%d=%d\n", a, b, a+b );
    //1+5=6
}

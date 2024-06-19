#include <stdio.h>

int main(void)
{
    int a = 1, b= 3;
    printf ("a+%d=a+b", b);
    printf ("%d=F (%d)", a, b);
    printf ("a=F (%d)", b);
    printf ("%d>%d", a+b, b);
    printf ("F(%d)==G(%d)", b, a);
}

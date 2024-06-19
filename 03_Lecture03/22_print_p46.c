#include <stdio.h>

int main(void)
{
    int a = 1, b= 3;
    printf ("a+%d=a+b\n", b);
    printf ("%d=F (%d)\n", a, b);
    printf ("a=F (%d)\n", b);
    printf ("%d>%d\n", a+b, b);
    printf ("F(%d)==G(%d)\n", b, a);
}

#include <stdio.h>

int main(void)
{
    float x = 123.4567;
    printf ("%f\n", x);
    //123.456700

    printf ("%9.3f\n", x);
    //123.456

    printf ("%e\n", x); // стандартно 1.234567 * 102
    //1.234560e+02

    printf ("%10.2e\n", x);// всего 10 знаков, 2 цифры под мантиссу
    //1.23e+02
}

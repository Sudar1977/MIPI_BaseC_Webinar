#include <stdio.h>

int main(void)
{
    int a, b;
    scanf ("%d", a); // &a
    scanf ("%d", &a, &b); // %d%d
    scanf ("%d%d", &a); //&a, &b
    scanf ("%d %d", &a, &b); // пробел не обязательно
    scanf ("%f%f", &a, &b); // %d%d
}

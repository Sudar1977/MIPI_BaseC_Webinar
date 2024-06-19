#include <stdio.h>

int main()
{
    float f;
    f = 3/2; //целочисленное деление f=1.0
    f = 3./2; //вещественное деление f=1.5
    int a = 7;
    float x;
    x = a / 4; // 1
    x = 4 / a; // 0
    x = float(a) / 4; // 1.75
    x = 1.*a / 4; // 1.75
}

#include <stdio.h>

int main()
{
    float f;
    f = 3/2; //целочисленное деление f=1.0
    printf("%f\n",f);
    f = 3./2; //вещественное деление f=1.5
    printf("%f\n",f);
    int a = 7;
    float x;
    x = a / 4; // 1
    printf("%f\n",x);
    x = 4 / a; // 0
    printf("%f\n",x);
    x = (float)a / 4; // 1.75
    printf("%f\n",x);
    x = 1.*a / 4; // 1.75
    printf("%f\n",x);
}

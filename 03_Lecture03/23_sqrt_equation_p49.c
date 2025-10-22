#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
    float a,b,c;
    float B,d;
    float x1,x2;
    setlocale(LC_ALL, ".utf-8");
    printf("Вычисление корней квадратного уравнения\"a*x*x+b*x+с=0\"\n");
    printf("Введите a:\n");
    scanf ("%f", &a); //1
    printf("Введите b:\n");
    scanf ("%f", &b); //18
    printf("Введите c:\n");
    scanf ("%f", &c); //32
    B = b/2;
    d = sqrtf(B*B - a*c);
    printf("Корни квадратного уравнения \n");
    x1 = (-B + d)/a; //-2
    printf("X1 = %f \n",x1);
    x2 = (-B - d)/a; //-16
    printf("X2 = %f \n",x2);
    return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
    float a,b,c;
    float B,d;
    float X1,X2;
    printf("%s\n",setlocale(LC_ALL, ".utf-8"));
    printf("Вычисление корней квадратного уравнения\"a*x*x+b*x+с=0\"\n");
    printf("Введите a:\n");
    scanf ("%f", &a); //1
    printf("Введите b:\n");
    scanf ("%f", &b); //18
    printf("Введите c:\n");
    scanf ("%f", &c); //32
    B = b/2;
    if(a!=0)
    {
        d = B*B-a*c;
        if(d<0)
        {
            printf("Корни квадратного уравнения комплексные\n");
        }
        else
        {
            printf("Корни квадратного уравнения \n");
            d = sqrtf(d);
            X1 = (-B + d)/a; //-2
            printf("X1 = %f \n",X1);
            X2 = (-B - d)/a; //-16
            printf("X2 = %f \n",X2);
        }
    }
    else
    {
        if(b!=0)
        {
            X1 = -c/b;
            printf("Корень линейного уравнения %f\n",X1);
        }
        else
        {
            printf("Корней НЕТ!\n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(int argc, char **argv)
{
    float a,b,c;
    float B,d;
    float X1,X2;
    setlocale(LC_ALL, "Rus");
    printf("���������� ������ ����������� ���������\"a*x*x+b*x+�=0\"\n");
    printf("������� a:\n");
    scanf ("%f", &a); //1
    printf("������� b:\n");
    scanf ("%f", &b); //18
    printf("������� c:\n");
    scanf ("%f", &c); //32
    B = b/2;
    d = sqrtf(B*B - a*c);
    printf("����� ����������� ��������� \n");
    X1 = (-B + d)/a; //-2
    printf("X1 = %f \n",X1);
    X2 = (-B - d)/a; //-16
    printf("X2 = %f \n",X2);
    return 0;
}

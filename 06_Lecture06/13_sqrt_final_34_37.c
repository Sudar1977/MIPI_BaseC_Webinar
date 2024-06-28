#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

float InputFloat(char* message)
{
float number;
static int counter = 0;
    counter++;
    printf("%d,%s",counter,message);
    scanf("%f",&number);
    return number;
}

void CalcRealRoots(float sqrD,float B,float a)
{
float X1,X2;
    printf("����� ����������� ��������� \n");
    float d = sqrtf(sqrD);
    X1 = (-B + d)/a; //2
    printf("X1 = %f \n",X1);
    X2 = (-B - d)/a; //16
    printf("X2 = %f \n",X2);
}

//������� ���������� ������ ����������� ��������� ��������� ��������.
void SquareEquation(void)
{
    printf("���������� ������ ����������� ��������� \\ \"a*x*x+b*x+�=0\"\n");
    float a = InputFloat("������� a:\n");//1
    float b = InputFloat("������� b:\n");//18
    float c = InputFloat("������� c:\n");//32
    float B = b/2;
    if(a!=0)
    {
        float d = B*B-a*c;
        if(d<0)
        {
            printf("����� ����������� ��������� ����������� \n");
        }
        else
        {
            CalcRealRoots(d,B,a);
        }
    }
    else
    {
        if(b!=0)
        {
            float X1 = -c/b;
            printf("������ ��������� ��������� %f\n",X1);
        }
        else
        {
            printf("������ ���!\n");
        }
    }
}

int main(int argc, char **argv)
{
char Choice;
    setlocale(LC_ALL, "Rus");
    while(1)
    {
        printf("1. ���������� ������ ����������� ���������\n");
        printf("0. �����\n");
        printf("��� ����� ������� Q\n");
        Choice = getch();
        switch(Choice)
        {
            case '1':
                SquareEquation();
                break;
            case '0':
            case 'q':
            case 'Q':
                return 0;
                break;
            default:
                printf("���������� ����� %x\n",Choice);
                break;
        }
    }
    return 0;
}

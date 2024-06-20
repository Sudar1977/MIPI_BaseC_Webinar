#include <locale.h>
#include <stdio.h>

int main(int argc, char **argv)
{
char Choice;
    setlocale(LC_ALL, "Rus");
    while(1)
    {
        printf("1. Вычисление корней квадратного уравнения\n");
        printf("0. Выход\n");
        printf("Для выход нажмите Q\n");
        NO_PRINT:
        scanf("%c",&Choice);
        printf("%x\n",Choice);
        switch(Choice)
        {
            case '1':
                printf("SquarEquation()\n");
            break;
            case '0':
            case 'q':
                return 0;
            break;
            case 0xa://'\n':
                goto NO_PRINT;
            break;
            default:
                printf("Непонятный выбор\ %x\n",Choice);
            break;
        }
    }
    return 0;
}

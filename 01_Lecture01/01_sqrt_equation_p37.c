/*
 Комментарий
 */
//Комментарий
#include <stdio.h>
#include <locale.h>

int main (int argc, char **argv)
{
    setlocale(LC_ALL, "en_US.UTF-8"); //устанавливаем русскую локализацию
    printf("Вычисление корней квадратного уравнения \\ \"a*x*x+b*x+c=0\" \n");
    printf("Введите a: \n");
    printf("Введите b: \n");
    printf("Введите c:\n");
    printf("Корни квадратного уравнения \n");
    printf("X1 = \n");
    printf("X2 = \n");
    return 0;
}

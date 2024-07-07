#include <stdio.h>

int main()
{
    int X1, Y1, X2, Y2; //Объявить целочисленные переменные
    float k, b; //Объявить вещественные переменные
    scanf ("%d %d %d %d", &X1, &Y1, &X2, &Y2); //Считать числа и записать по адресам
    //~ k=((Y1-Y2)/(float)(X1-X2));
    k=(Y1-Y2)/(X1-X2);
    b=Y2-k*X2;
    printf("%.2f %.2f\n", k, b);
    float dX = X1-X2;
    float dY = Y1-Y2;
    k = dY/dX;
    b=Y2-k*X2;
    printf("%.2f %.2f\n", k, b);
    return 0; //Завершить программу успешно
}


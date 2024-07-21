#include <stdio.h>

int main(int argc, char **argv)
{
    int matr[3][2];
    //~ int *pm[2]; //массив  из 2-ух  указателей *int
    int (*pm)[2]; //указатель на строку из 2-ух int
    pm = matr;
    pm[1][1] = 123; //теперь все ок
    printf("%d\n",matr[1][1]); // 123
    return 0;
}

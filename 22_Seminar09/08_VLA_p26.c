#include <stdio.h>
#include <stdint.h>


int main(int argc, char **argv)
{
    uint32_t n;
    scanf("%u",&n); //вводим количество элементов
    int32_t ar[n]; //создаем VLA массив
    return 0;
}

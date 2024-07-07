#include <stdio.h>

//Перевод вещественного числа в двоичный вид
void print_float_bin(float num) {
    unsigned int* fi = (unsigned int*)&num;
    for(int i=31;i>=0;i--) {
        if(i==30 || i==22)
            putchar(' ');
        if(*fi&(1<<i))
            putchar('1');
        else
            putchar('0');
    }
    putchar('\n');
}

int main(void)
{
    float f=15.625;
    print_float_bin(f);
    return 0;
}

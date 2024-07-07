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
    float one=1, one_error=0;
    int i;
    print_float_bin(0.1);
    // 10 раз прибавляем 0.1
    for(i=0;i<10;i++,one_error+=0.1);
        if ( one == one_error )
            printf("Yes\n");
        else
            printf("No\n");
    printf("one = %f\n", one);
    printf("one_error = %f\n", one_error);
    print_float_bin(one);
    print_float_bin(one_error);
    return 0;
}

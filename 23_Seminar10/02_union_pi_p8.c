#include <stdio.h>
#include <inttypes.h>

union intbytes {
    uint32_t number;
    float real;
    uint8_t bytes[4];
} d;


//Перевод вещественного числа в двоичный вид
void print_float_bin(union intbytes num) {
    //~ unsigned int* fi = (unsigned int*)&num;
    for(int i=31;i>=0;i--) {
        if(i==30 || i==22)
            putchar(' ');
        //~ if(*fi&(1<<i))
        if(num.number & (1<<i))
            putchar('1');
        else
            putchar('0');
    }
    putchar('\n');
}

int main()
{
    d.real = 3.14;
    printf ("Real %f\n",d.real);
    printf ("Number %x",d.number);
    printf(" in memory is: %x %x %x %x\n", d.bytes[0],
    d.bytes[1], d.bytes[2], d.bytes[3]);
    print_float_bin(d);
    return 0;
}

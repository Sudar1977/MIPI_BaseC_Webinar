//Пример: address.c. Написать функцию set_value, устанавливающую значение по заданному в виде целого числа адресу.

#include <stdio.h>
#include <stdint.h>

int var[100];

// Начало решения
void set_value(uint64_t addr, uint32_t val)
{
    *(uint32_t*) addr = val;
}
// Конец решения

int main()
{
    int a,b;

    scanf("%d%d", &a,&b);
    set_value( (size_t) & var[b], a );
    printf("%d\n", var[b]);
    set_value( (size_t) (var+b), a );
    printf("%d\n", var[b]);
    set_value( (size_t) var+b, a );
    printf("%d\n", var[b]);
    //~ set_value( var+b, a );//ОШИБКА!!!
    printf("%d\n", var[b]);

    return 0;
}

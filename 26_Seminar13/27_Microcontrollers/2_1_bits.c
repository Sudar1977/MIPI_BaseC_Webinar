//~ 1. Написать пару функций, одна из которых будет устанавливать все биты, а другая — снимать по маске.
//~ Возможное решение: bits.c
//~ Простейшая вещь, но довольно полезная (особенно в контексте того, что именно так работает большинство флешек).

#include <stdio.h>
#include <stdint.h>

//Начало решения
void set_all_bits (void *arg)
{
    //Писать 0xFFFFFFFFFFFFFFFF тоже не очень,
    //так как мы вообще говоря не знаем длину типа.
    //~0 гарантирует единичные биты.
    * (unsigned int*)arg = ~0;
}

int reset_some_bits(void *dest, unsigned int val)
{
    *(unsigned int*)dest &= val;//приведение типов
    return (*(unsigned int*)dest == val);
}

int set_some_bits(void *dest, unsigned int val)
{
    *(unsigned int*)dest |= val;//приведение типов
    return (*(unsigned int*)dest == val);
}

// Конец решения


int main()
{
    float var = 0;
    uint32_t a=4095;
    uint32_t b=2000;
    uint32_t c=4095;
    uint32_t d=0xffff;
    int status = 0;
    //~ scanf("%x%x%x%x", &a, &b, &c, &d); //a=4095, b=2000, c=4095, d=0xffff
    set_all_bits(&a);
    printf("set_all_bits a: %#X\n",a);
    status = reset_some_bits(&a, 0x25);
    status = printf("reset_some_bits 0x25 %d %#X\n",status, a);
    set_all_bits(&a);
    printf("set_all_bits a: %#X\n",a);

    status = reset_some_bits(&var, b);
    printf("reset_some_bits %d %#X %f\n",status, a, var);
    status = reset_some_bits( &var, c );
    printf("reset_some_bits %d %#X %f\n",status, a, var);
    set_all_bits(&var);
    status = reset_some_bits(&var, d);
    printf("reset_some_bits %d %#X %f\n",status, a, var);

    return 0;
}

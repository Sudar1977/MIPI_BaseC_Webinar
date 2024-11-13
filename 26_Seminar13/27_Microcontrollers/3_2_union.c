//~ 2. Пример: union.c. Написать typedef для 32-битного типа с названием my_type таким образом,
//~ чтобы можно было обращаться к байтам(поле с названием byte),
//~ полусловам(u16), словам (u32) и числам с плавающей запятой (f)

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


//Начало решения
typedef union
{
    uint32_t u32;
    uint16_t u16[2];
    uint8_t  byte[4];
    float    f;
} my_type;
//Конец решения


int main()
{
    my_type var;

    float    f;
    uint16_t u16;
    uint8_t  u8;
    uint32_t u32;
    scanf ("%d%ld%lu%f", &u8, &u16, &u32, &f);

    var.f = f;
    printf("%lu\n", var.u32);
    var.u32 = 0;
    var.byte[2] = u8;
    printf("%lu\n", var.u32);
    var.u32 = 0;
    var.u16[1] = u16;
    printf("%lu\n", var.u32);
    var.u32 = u32;
    printf("%f\n", var.f);

    return 0;
}




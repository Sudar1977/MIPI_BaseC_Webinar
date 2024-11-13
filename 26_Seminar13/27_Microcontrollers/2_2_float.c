//~ 2. Прочесть из потока ввода число типа float и затем вывести его на экран в формате a*2\^b,
//~ где a и b — десятичные числа, причём а в диапазоне от [0,1; 1).
//~ Возможное решение: float.c. думал спервадать задачу на полноценный вывод, но сложновато получится на мой взгляд.
//~ Пример решения: float.c

#include <stdio.h>
#include <stdint.h>

int main ()
{
    float a=0;
    uint32_t* pa = (uint32_t*)&a;
    int o=0;
    scanf("%f", &a);

    if(a<0)
    {
        putchar('-');
    }

    float m_f =  (*pa & 0x7FFFFF ) / (float)0x800000 ;
    o = (((*pa) >> 23) & 0xFF) - 127 ;

    putchar ('1');
    putchar (',');

    for (int i = 0; i < 9; i++)
    {
        m_f*=10;
        putchar ('0'+ m_f);
        m_f = m_f - (int)m_f;
    }

    putchar ('*');
    putchar ('2');
    putchar ('^');

    if(o<0)
    {
        putchar ('-');
        o=-o;
    }

    if ( o >= 100)
    {
        putchar ('1');
        o%=100;
    }

    if(o>=10)
    {
        putchar('0' + o/10);
        o%=10;
    }
    putchar('0' + o);

    return 0;
}

#include <stdio.h>

//Преобразование аргумента в строку
#define TOSTR(a) #a

int main(void)
{
    printf("%s\n",TOSTR(hello world));
    printf("%s\n",TOSTR(123));
    printf("%s\n",TOSTR("hello world"));
    return 0;
}

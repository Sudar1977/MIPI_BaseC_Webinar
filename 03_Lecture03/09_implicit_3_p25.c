#include <stdio.h>

int main()
{
    unsigned int u = 50;
    int i = -500;
    int answer = i / u; // answer = 85899335.
    // i будет приведен к беззнаковому типу и его
    //значение будет равно 232-500 вместо -500, а результат
    //деления будет приведен обратно к знаковому типу int
}

#include <stdio.h>

int main()
{
    char c;
    int Number=0;//unsigned long long
    while( (c=getchar())!='\n') //спец символ новой строки проверка на переполнения
        if(c>='0' && c<='9')
            Number = Number*10+c-'0';//if Number
            printf("%d",Number);
    return 0;
}

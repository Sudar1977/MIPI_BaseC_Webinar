#include <stdio.h>

int main()
{
    char c;
    int sum=0;
    while( (c=getchar())!='\n') //спец символ новой строки
        if(c>='0' && c<='9')
        sum+=c-0x30;//sum+=c-'0';sum+=c&0x0F;
        printf("%x",sum);
    return 0;
}

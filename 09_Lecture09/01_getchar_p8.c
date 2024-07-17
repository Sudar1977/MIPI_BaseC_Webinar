#include <stdio.h>

int main(int argc, char **argv)
{
    char s[100], c;
    int i=0;
    while( (c=getchar())!='\n' )
        s[i++]=c;
    s[i]='\0';
    i=0;
    while( s[i] ) // s[i] != 0
        putchar(s[i++]);
    printf("\n%s\n",s); // напечатать строку
}

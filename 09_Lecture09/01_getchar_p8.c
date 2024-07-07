#include <stdio.h>

int main(int argc, char **argv)
{
    char s[100], c;
    int i=0;
    while( (c=getchar())!='\n' )
        s[i++]=c;

/*
    while( s[i] ) // s[i] != 0
        putchar(s[i++]);
*/

    s[i]='\0';
    printf("%s",s); // напечатать строку
}

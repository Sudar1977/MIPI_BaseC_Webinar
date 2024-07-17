#include <stdio.h>

int main(int argc, char **argv)
{
    char s[100]="";
    int r;
    //~ r=scanf("%[a-z]",s);// считать стр буквы
    //~ r=scanf("%[0-9]",s);// считать цифры
    r=scanf("%[^\n]",s);// все кроме \n

    printf("%s %d\n",s,r);

}

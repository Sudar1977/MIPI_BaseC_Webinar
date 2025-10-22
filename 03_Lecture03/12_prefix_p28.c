#include <stdio.h>

int main()
{
    // Префиксная форма
    int a=7, b;
    b = ++a; // a=8 b=8
    //~ a = a+1;//сначала в "a" будет увеличина на 1
    //~ b = a;//затем "a" будет записана в "b"
    printf("a = %d, b = %d\n",a, b);
    return 0;
}

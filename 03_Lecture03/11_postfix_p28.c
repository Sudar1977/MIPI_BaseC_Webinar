#include <stdio.h>

int main()
{
    // Постфиксная форма
    int a=7, b;
    b = a++; // a=8 b=7
    //~ b = a;//сначала в "a" будет записана "b"
    //~ a = a+1;//затем "a" будет увеличина на 1
    printf("a = %d, b = %d\n",a, b);
    return 0;
}

#include <stdio.h>

int main()
{
    //~ int a, b, c;
    //~ a = (a+b) * (c + 3); // после вычисления всего выражения

    int a, b=10, c;
    a =  b++ + ++b;  // ТАК НЕЛЬЗЯ дважды модифицируется одна переменная Внимание! Attention! Atención!
    printf("%d %d\n",a,b);
    a = (c=3) + (c=2);  // ТАК НЕЛЬЗЯ дважды модифицируется одна переменная Внимание! Attention! Atención!
    printf("%d %d\n",a,c);
}

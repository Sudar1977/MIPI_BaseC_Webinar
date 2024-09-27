#include <stdio.h>
int main(int argc, char **argv)
{    // На вход подается произвольное трехзначное число, напечать сумму цифр
    int a, d1, d2, d3;
        scanf (" %d", &a);
        d1 = (a / 100) % 10;
        d2 = (a / 10)  % 10;
        d3 =  a        % 10;
        printf("%d\n",d1+d2+d3);
    return 0;
}

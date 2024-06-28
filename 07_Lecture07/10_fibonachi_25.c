#include <stdio.h>

int fibonachi(int n)
{
    if(n<=0)
        return 0;
    if(n==1)
        return 1;
    return fibonachi(n - 1) + fibonachi(n - 2);
}

int main(void)
{
    printf("%d\n",fibonachi(6));
}

#include <stdio.h>

int fibonachi(int n)
{
    printf("n=%d\n",n);
    if(n <= 0)
    {
        //printf("F(%d)=0\n",n);
        printf("return 0\n");
        return 0;
    }
    if(n == 1)
    {
        printf("F(1)=1\n");
        //printf("F(%d)=1\n",n);
        return 1;
    }

 int Fib = fibonachi(n - 1)+ fibonachi(n - 2);
    printf("Fib(%d)=%d\n",n,Fib);
    return Fib;
}

int main(void)
{
    printf("%d\n",fibonachi(6));
    return 0;
}

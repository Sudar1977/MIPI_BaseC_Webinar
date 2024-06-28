#include <stdio.h>

int gcd ( int n, int m )
{
    if(n == m)
        return n ;
    if (n < m)
        return gcd(n,m - n );
    return gcd(n - m,m );
}

int main()
{
 int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("GCD=%d",gcd(a,b));
    return 0;
}

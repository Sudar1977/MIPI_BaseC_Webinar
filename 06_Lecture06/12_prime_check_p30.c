#include <stdio.h>

int prime(int n)
{
    int i=2;
    while (i*i<=n)
    {
        if (n%i==0)
            return 0;
            i++;
    }
    return 1;
}

int main()
{
    int num;
    scanf("%d",&num);
    prime(num) ? printf("Prime") : printf("Not prime");
//printf("%s",prime(num) ? "Prime" : "Not prime");
//if (prime(num)) printf("Prime"); else printf("Not prime");
    return 0;
}

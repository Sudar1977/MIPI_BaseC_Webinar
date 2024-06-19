#include <stdio.h>

int main()
{
    int n=123;
    int sum;
    sum = n%10; //sum = 3
    sum += (n/10)%10; //sum = 5
    sum += (n/100)%10; //sum = 6
    printf("%d\n",sum);
}

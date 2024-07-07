#include <stdio.h>

int main( )
{
    int n, count;
    printf("Input number: ");
    scanf("%d", &n);
    count = 0;
    while (n != 0)
    {
        count ++;
        n = n / 10; // Отбросили одну цифру
    }
    printf("In %d found %d digits", n, count);
    return 0;
}

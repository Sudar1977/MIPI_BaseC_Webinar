#include <stdio.h>

int main ()
{
    int input, n, count;
    printf ("Input number : ");
    scanf ("%d", &input);
    count = 0;
    n = input;
    while (n != 0)
    {
        count ++;
        n = n / 10; // Отбросили одну цифру
    }
    printf ("In %d fount %d digits", input, count);
    return 0;
}

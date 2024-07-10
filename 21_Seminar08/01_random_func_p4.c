#include <stdio.h>
#include <stdlib.h>

enum {SIZE = 10, SEED = 123};

int random_number(int n)
{
    return rand() % n;
}

int main(void)
{
 int a[SIZE], i;
    srand(SEED);
    printf("Array:\n");
    for (i = 0; i < SIZE; i++ )
    {
        a[i] = random_number(100) + 50;
        printf("%4d", a[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

enum {SIZE = 10, SEED = 123};

int random_number(int n)
{
    return rand() % n;
}

void init_array(int size, int a[], int max_random)
{
    for (size_t i = 0;i<size;i++)
        a[i]=random_number(max_random);
}

void print_array(int size, int a[])
{
    for (size_t i = 0; i < size; i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main(void)
{
    int a[SIZE], i;
    srand(SEED);
    init_array(SIZE, a, 100);
    print_array(SIZE,a);
    return 0;
}

#include <stdio.h>

void swap(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main(void)
{
    int n=7, m=5;
    swap(&n, &m); // Передается адрес
    printf("n = %d m = %d\n",n,m);
}

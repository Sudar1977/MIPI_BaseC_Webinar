#include <stdio.h>

void swap(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int n=7, m=5;
    printf("n = %d m = %d\n",n,m);    
    swap(n, m); // Передаются значения
    printf("n = %d m = %d\n",n,m);
}

#include <stdio.h>

unsigned int factorial(unsigned int n) {
    printf("%d\n",n);
    if(n<=1) // Условие остановки
        return 1;
    int _f = n * factorial(n-1);
    printf("%d*factorial(%d)=%d\n",n,n-1,_f);
    return _f; // Шаг
}

int main() {
    factorial(3);
    return 0;
}

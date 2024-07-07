#include <stdio.h>

int y=1;

int f(int *pa) {
    static int x=3;
    x += y;//3+2=5//5+2=7
    return x + *pa + y;//5+10+2=17//7+10+2=19
}

int main(void){
    int n = 10;
    y++;//2
    printf("Answer = %d\n", f(&n));
    printf("Answer = %d\n", f(&n));
}


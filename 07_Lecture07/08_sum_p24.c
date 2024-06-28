#include <stdio.h>

//Нерекурсивный способ:
int sumIter(int num) {
    int sum = 0;
    while(num > 0) {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main() {
    int numb;
    scanf("%d",&numb);
    printf("%d\n",sumIter(numb));
    return 0;
}

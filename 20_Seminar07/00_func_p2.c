#include <stdio.h>

void func(void) {
    int a=5; //локальная переменная
    a++;
    printf("a = %d\n",a);
}

int main(void)
{
    func();
    func();
    func();
    return 0;
}

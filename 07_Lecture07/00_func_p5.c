#include <stdio.h>

void func(void) {
    static int a=5; //статическая память
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

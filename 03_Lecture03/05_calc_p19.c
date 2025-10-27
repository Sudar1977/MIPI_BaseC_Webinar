#include <stdio.h>

int main()
{
    int a, x, y, z;
    a = 27; //положить целое число 27 в переменную a
    x = a / 5; // x=5
    y = a % 5; // y=2
    z = (x + 5) * y; // z=20
    printf("z=%d\n",z);
    return 0;
}

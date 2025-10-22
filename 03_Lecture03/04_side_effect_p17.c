#include <stdio.h>

int main()
{
    int a, b, x, y, z;
    //~ int a, b, x=0, y, z;
    a = 5; //положить целое число 5 в переменную a
    x = x + 20; // x=25 побочный эффект
    y = (x - 15) * (x + a); // y=300
    z = y = a+1; // y=6 z=6
    printf("x=%d y=%d z=%d\n",x,y,z);
}

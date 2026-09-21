#include <stdio.h>
#define N 8
int main()
{
    //~ short x=1;
    short x=5.12*256,y=-2.23*256;//0.1
    float i = x+y;
    //~ float i = 3.3*x;
    printf("%f\n",i/(1<<N));
    return 0;
}

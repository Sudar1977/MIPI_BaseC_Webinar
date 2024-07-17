#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    //~ int a[5];
    //~ int b[5];
    //~ a = b; // так делать нельзя

    int a[5]={1,2,3,4,5};
    //~ int a[5]={0};
    int *pa;
    pa = a; // так можно
    pa = &a[0]; // и так
    printf("%d\n",pa[3]);
    return 0;

}

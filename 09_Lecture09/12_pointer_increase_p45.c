#include <stdio.h>

int main()
{
    int a[5] = {10,20,30,40,50};
    int *pa, n=10;
    pa = a+2;
    n = ++*pa; // ++(*pa)
    //n = *(++pa);//n=40
    printf("%d\n",n);
    return 0;
}

#include <stdio.h>

int sum(int a[], int size)
{
    int i, s=0;
    for(i=0;i<size;i++)
        s+=a[i];
    return s;
}

int main()
{
    int a[5] = {10,20,30,40,50};
    printf("%d\n",sum(a,5));
    printf("%d\n",sum(a,2));
    printf("%d\n",sum(a+2,3));
    return 0;
}

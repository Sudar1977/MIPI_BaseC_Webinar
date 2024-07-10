#include <stdio.h>

#define SIZE 5

int sum0(int* a0)
{
    int i, s=0;
    for(i=1;i<a0[0]+1;i++)
        s+=a0[i];
    return s;
}

int main(int argc, char **argv)
{
    int a0[SIZE+1] = {SIZE,10,20,30,40,50};
    printf("%d\n",sum0(a0));
    return 0;
}

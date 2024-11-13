#include <stdio.h>

#define SWAP(type,a,b) do {type a##1 = a; a = b; b = a##1;}while(0)

int main(void)
{
    int a=5, t=7;
    printf("a = %d b = %d\n", a, t);    
    if (a<t)
        SWAP(int, a,t);//{...}
    else
        a = 1000;
    printf("a = %d b = %d\n", a, t);
    return 0;
}

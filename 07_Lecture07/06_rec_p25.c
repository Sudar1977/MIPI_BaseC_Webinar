#include <stdio.h>

void rec(int n) 
{
    //~ printf("%5d",n);
    if(n>0) 
        rec(n-1);
    printf("%5d",n);
}

int main(void)
{
    rec(3);
    return 0;
}

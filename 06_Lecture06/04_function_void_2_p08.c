#include <stdio.h>

//~ int max ()
int max (void)
{
    int a,b; // видны только внутри
    scanf("%d%d",&a,&b);
    if (a>b)
        return a;
    else
        return b;
}


int main()
{
    //~ int a,b;
    //~ printf("max = %d\n", max(2132131,"HELLO"));
    printf("max = %d\n", max());
    return 0;
}

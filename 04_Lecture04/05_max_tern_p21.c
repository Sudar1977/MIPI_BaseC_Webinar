#include <stdio.h>
#include <inttypes.h>

int main()
{
    int a,b, max;
    scanf("%d%d",&a,&b);
    // короткая запись if else
    //условная операция
    max = a>b ? a : b;
    //~ if(a>b)
        //~ max = a;
    //~ else
        //~ max = b;
    printf("%d",max);
    return 0;
}

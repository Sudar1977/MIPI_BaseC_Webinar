#include <stdio.h>
#include <inttypes.h>

int main()
{
    int a = 5, b = 7;
    printf("%d\n",(a += 5) * (b -= 3));
    printf("a=%d,b=%d\n",a,b);
    printf("%d\n",--b / (a++ - 3));
    printf("a=%d,b=%d\n",a,b);
    printf("%d\n",(a -= 2) || 47 / (b - 7));
    printf("a=%d,b=%d\n",a,b);//a=9,b=3
    printf("%d\n",(a *= b) + (b *= a));
    printf("a=%d,b=%d\n",a,b);//неопределенность
    return 0;
}

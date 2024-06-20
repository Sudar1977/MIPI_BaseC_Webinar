#include <stdio.h>

int main(int argc, char **argv)
{
int a = 14;
int b = 35;
int t;
    printf("a=%d,b=%d,",a,b);
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    printf("NOD=%d\n",a);
    return 0;
}

#include <stdio.h>

int main(int argc, char **argv)
{
int a = 14;
int b = 35;
    printf("a=%d,b=%d,",a,b);
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    printf("NOD=%d\n",a);
    return 0;
}

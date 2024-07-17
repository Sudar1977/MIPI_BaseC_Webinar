#include <stdio.h>

int main(int argc, char **argv)
{
    int i, a=1;
    for(i=1; i<4; i++)
        a++;
    printf("%d\n",a);

    int s, b=1;
    for(s=1; s<4; s++)
        b = b+s;
    printf("%d\n",b);

    int e, k=1, l=2;
    for(e=3; e>=1; e--)
        k+=l;
    printf("%d\n",k);
}

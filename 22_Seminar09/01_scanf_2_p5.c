#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];
    int r;
    r=scanf("%[0-9]=%[a-z]",s1,s2);
    printf("r = %d\n",r);
    return 0;
}

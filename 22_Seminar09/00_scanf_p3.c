#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100]="", s2[100]="";
    //~ scanf("%s%s",s1,s2);
    //~ fscanf("%d;%d;%d",a1,a2,a3);
    int r = scanf("%[0-9]=%[a-z]", s1, s2);
    printf("s1 = %s s2 = %s\n",s1,s2);
    return 0;
}

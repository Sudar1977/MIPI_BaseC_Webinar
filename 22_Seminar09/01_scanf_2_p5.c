#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100]="", s2[100]="";
    int r;
    r=scanf("%[0-9]=%[a-z]",s1,s2); //prog.exe < test.txt
    printf("r = %d\n",r);
    printf("s1 = %s s2 = %s\n",s1,s2);    
    return 0;
}

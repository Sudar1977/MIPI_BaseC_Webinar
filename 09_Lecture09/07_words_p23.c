#include <stdio.h>

int main(void)
{
    char s[100];
    int count=0;
    while(scanf("%s",s)==1)
    {
        count++;
        printf("In this text %d words\n",count);
    }
    //printf("In this text %d words\n",count);
    return 0;
}

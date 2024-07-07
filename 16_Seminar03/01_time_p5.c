#include <stdio.h>

int main(void)
{
    int s  = 10000;
    int h  = s/3600;
    s  = s - h*3600;
    int m  = s/60;
    s  = s - m*60;
    int s1 = h*60*60+m*60+s%60;
    printf("s=%d m=%d h=%d s1=%d\n",s,m,h,s1);
    return 0;
}


#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d",&x);
    printf("%s",(x == 0) ? "NO\n" : "YES\n");
    x==0 ? printf("NO\n") : printf("YES\n");
    return 0;
}


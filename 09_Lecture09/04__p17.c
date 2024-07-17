#include <stdio.h>

int main(int argc, char **argv)
{
    char st1[10] = "hello";
    char st2[10] = "hello";
    if(st1 == st2)
        printf("Yes");
    else
        printf("No");
    return 0;
}

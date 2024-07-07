#include <stdio.h>

int strlen(const char *src)
{
    int len=0;
    while (*src++) len++;
    return len;
}

int main(int argc, char **argv)
{
char* str={"Hello!"};
    printf("%d\n",strlen(str));
    return 0;
}

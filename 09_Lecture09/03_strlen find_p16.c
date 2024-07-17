#include <stdio.h>

int my_strlen(const char *src)
{
    int len=0;
    while (*src++)//*src++!=0
        len++;
    return len;
}

int main(int argc, char **argv)
{
char* str={"Hello!"};
    printf("%d\n",my_strlen(str));
    return 0;
}

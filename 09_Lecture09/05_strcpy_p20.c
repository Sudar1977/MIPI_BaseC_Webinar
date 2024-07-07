#include <stdio.h>

char *strcpy (char *dst, char *src)
{
char *ptr = dst;
    while(*dst++=*src++);
        return ptr;
}
int main(int argc, char **argv)
{
char str1[]={"Hello!"};//char* str1 = {"Hello!"};
char str2[]={"World!"};//char* str2={"World!"}
    printf("%s\n",strcpy(str2,str1));
    printf("%s\n",str2);
    return 0;
}

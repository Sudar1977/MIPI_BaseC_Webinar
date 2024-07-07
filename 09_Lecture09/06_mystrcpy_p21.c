#include <stdio.h>

char *mystrcpy (char *dst, char *src)
{
    for (char* ptr = dst; *src; src++,ptr++)
        *ptr = *src;
    *ptr=0;
    return dst;
}
int main(int argc, char **argv)
{
char str1[]={"Hello!"};//char* str1 = {"Hello!"};
char str2[]={"World!"};//char* str2={"World!"}
    printf("%s\n",strcpy(str2,str1));
    printf("%s\n",str2);
    return 0;
}

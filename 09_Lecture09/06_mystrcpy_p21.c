#include <stdio.h>

char *my_strcpy2(char *dst, char *src)
{
char *ptr = dst;
    while((*dst++=*src++))//(*dst++=*src++)!=0
    {}
    return ptr;
}

char *my_strcpy1(char *dst, char *src)
{
    for (char* ptr = dst; *src; src++,ptr++)
        *ptr = *src;
    return dst;
}


int main(int argc, char **argv)
{
char str1[]={"Hello!"};//char* str1 = {"Hello!"};
char str2[]={"World!"};//char* str2={"World!"}
    printf("%s\n",my_strcpy2(str2,str1));
    printf("%s\n",str2);
    printf("%s\n",str1);
    return 0;
}

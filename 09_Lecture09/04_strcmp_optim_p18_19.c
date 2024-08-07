#include <stdio.h>
#include <string.h>

int my_strcmp(const char *a, const char *b)
{
    while ( *a && *b && *a == *b )
        ++a, ++b;
    return *a - *b;
}

void Print(char* str,int res)
{
    printf(str, res==0 ? "equal to" : res<0 ? "less" : "greater than");
}

int main(void)
{
    char *a = "abcde",
         *b = "xyz",
         *c = "abcd",
         *d = "xyz";
    printf("A = %s\nB = %s\nC = %s\nD = %s\n\n", a, b, c, d);
    Print("A is %s B\n",my_strcmp(a,b));
    Print("A is %s D\n",my_strcmp(a,d));
    Print("A is %s C\n",my_strcmp(a,c));
    Print("B is %s C\n",my_strcmp(b,c));
    Print("B is %s D\n",my_strcmp(b,d));
    Print("C is %s D\n",my_strcmp(c,d));
    return 0;
}

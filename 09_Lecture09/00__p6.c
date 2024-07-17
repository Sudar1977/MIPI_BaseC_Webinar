#include <stdio.h>
#define N 11

int main(int argc, char **argv)
{
    {
        char s[10];// Строка из 9 значимых символов
    }
    {
        char s[N];// Строка из N-1 значимых символов, в строке всегда есть символ \0
    }
    {
        char st[] = "hello";
        // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
        printf("%llu\n", sizeof(st)); // 6
    }
    {
        char st[10] = "hello";
        // st[0]='h' st[1]='e' st[2]=’l’ st[3]=’l’ st[4]='o' st[5]='\0'
        printf("%llu\n", sizeof(st)); //
    }
    return 0;
}

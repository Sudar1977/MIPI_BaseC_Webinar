#include <stdio.h>

#define ANAME(n) a##n
#define MERGE(a,b) a##b
#define PRINT_AN(n) printf("a" #n " = %d\n", a ## n);

int main(void)
{
    int ANAME(1) = 10;
    int ANAME(2) = 22;
    int ANAME(3) = 35;
    PRINT_AN(1);
    PRINT_AN(2);
    PRINT_AN(3);
    int ai=3;
    PRINT_AN(i);//ai
    MERGE(a1+,+);
    PRINT_AN(1);
    return 0;
}

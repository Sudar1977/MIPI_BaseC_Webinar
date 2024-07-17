#include <stdio.h>

#define ONE printf ("DEBUG\n")
#define TWO ONE; ONE
#define FOUR TWO; TWO

int main(void)
{
    FOUR;
    return 0;
}

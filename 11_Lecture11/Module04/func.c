#include "mylibrary.h"

int max_3(int a, int b, int c)
{
    return max(max(a,b),c);
}

static int max(int a, int b)
{
    return a > b ? a : b;
}

#include <stdio.h>

int main()
{
    int i, count = 0;
    for (i = 102; i <= 987; i++)
    {
        int d1 = i % 10;
        int d2 = i % 100/10;
        int d3 = i / 100;
        if (d1!=d2 && d1!=d3 && d2!=d3)
        //if (i / 100 != i %
        //10 && i / 100 != i % 100 / 10
        //&& i % 100 / 10 != i % 10)
            count++;
    }
    printf("%d", count);
    return 0;
}

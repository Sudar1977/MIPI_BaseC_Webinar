#include <stdio.h>
#include <inttypes.h>

int main()
{
    int a=1,b=-1;
    printf("a = %d b = %d", a>>32, b>>-1);
    // a = 0 b = -1
}

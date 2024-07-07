#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    unsigned int i,n, pow2=1;
    scanf("%u",&n);
    for(i=0; pow2<n; i++)
        pow2 <<= 1; // pow2 = pow2 * 2
    printf("%u\n",pow2);
    return 0;
}

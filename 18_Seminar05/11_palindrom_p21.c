#include <stdio.h>
#include <inttypes.h>

int main()
{
    uint32_t count=0;
    for(uint32_t i=11;i<=999;i++) {
        if ( i<100 && i%10 == i/10 ) {
            count++;
            printf("%" PRIu32 " ",i);
        } else if(i>=100 && i%10 == i/100) {
            count++;
            printf("%" PRIu32 " ",i);
        }
    }
    printf("Total polindroms %" PRIu32 "\n",count);
    return 0;
}


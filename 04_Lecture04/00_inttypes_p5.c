#include <stdio.h>
#include <inttypes.h>

int main()
{
    int32_t a;
    scanf ("%" SCNd32, &a);//SCNu32
    printf("a = %" PRId32 " hex a = %" PRIx32
    "\n",a,a);//PRIu32
    return 0;
}

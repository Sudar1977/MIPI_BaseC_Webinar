#include <stdio.h>
#include <inttypes.h>

int main()
{
    int a[5]= {10,20,30,40,50};
    printf("&a[0] = %p\n", &a[0]);
    printf("&a[1] = %p\n", &a[1]);
    printf("&a[1]-&a[0] %lld\n", &a[1]-&a[0]);
    printf("&a[1]-&a[0] %lld\n", (uint8_t*)&a[1]-(uint8_t*)&a[0]);
    return 0;
}

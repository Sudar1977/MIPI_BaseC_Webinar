#include <stdio.h>

struct point
{
    unsigned char x:5; // 0-31
    unsigned char y:3; // 0-7
};

int main(void)
{
    struct point center = {0, 5};
    center.x = 2;
    printf("x=%d y=%d size=%llu \n", center.x, center.y,sizeof(center)); // x=2 y=5
    return 0;
}

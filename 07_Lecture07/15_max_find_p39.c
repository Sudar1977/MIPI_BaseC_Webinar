#include <stdio.h>
#include <inttypes.h>

uint32_t max_find()
{
    uint32_t number, max;
    scanf("%u", &number);
    if(number == 0)
        return 0;
    max = max_find();
    if (max < number)
        max = number;
    return max;
}

int main()
{
    printf("Max=%u",max_find());
    return 0;
}

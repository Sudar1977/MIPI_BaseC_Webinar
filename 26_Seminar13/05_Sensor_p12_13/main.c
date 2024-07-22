#include <stdio.h>
#include <stdlib.h>
#include "sensor.h"

int main(void)
{
struct sensor info[SIZE];
int number=AddInfo(info);
    print(info,number);
    printf("\nSort by t\n");
    SortByT(info,number);
    print(info,number);
    printf("\nSort by date\n");
    SortByDate(info,number);
    print(info,number);
    return 0;
}

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
    // qsort(info,number,sizeof(info[0]),CompareDate);
    print(info,number);
    return 0;
}
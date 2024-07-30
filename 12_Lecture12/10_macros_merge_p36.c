#include <stdio.h>

//Операция склейки записывается как <arg1>##<arg2>
#define MERGE(a,b) a##b

int main(void)
{
    MERGE(d,o); // do
    MERGE(a,2); // a2
    MERGE(+,+); // ++
    return 0;
}

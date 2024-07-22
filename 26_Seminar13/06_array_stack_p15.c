#include <stdio.h> 
#include <stdint.h>
#include <stdlib.h>

#define SIZE 30000000

struct sensor
{
    uint8_t day;
    uint8_t month;
    uint16_t year;
    uint8_t hour;
    int8_t t;
};

int main(int argc, char **argv) 
{ 
struct sensor info[SIZE];
struct sensor* info1 = 
malloc(SIZE*sizeof(struct sensor));
if(!info1)
    return -1;
free(info1);
 return 0; 
}

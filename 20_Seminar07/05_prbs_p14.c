#include <stdio.h> 
#include <stdint.h> 
#include <stdlib.h> 

int main(int argc, char* argv[]) 
{ 
    uint8_t start = 0x02; 
    uint8_t a = start; 
    int i;
    for (i = 1;; i++) 
    { 
        int newbit = (((a >> 6) ^ (a >> 5)) & 1); 
        a = ((a << 1) | newbit) & 0x7f; 
        printf("%x\n", a); 
        if (a == start) 
        { 
            printf("repetition period is %d\n", i); 
            break; 
        } 
    } 
    return 0;
}


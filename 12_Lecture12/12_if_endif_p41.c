#include <stdio.h>

#define DEBUG

#if defined DEBUG
    #define DEBUGPRINT fprintf (stderr, "debug in %d line func: %s\n", __LINE__, __func__)
#else
    #define DEBUGPRINT
#endif

int main(void){
    int a=5, b=7;
    DEBUGPRINT;
    printf("a = %d b = %d\n", a, b);
    return 0;
}

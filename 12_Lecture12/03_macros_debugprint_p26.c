#include <stdio.h>

#define DEBUGPRINT fprintf (stderr, "debug in %d line\n", __LINE__)

int main(void)
{
    DEBUGPRINT;
    return 0;
}

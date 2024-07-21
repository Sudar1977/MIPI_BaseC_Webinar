#include <stdio.h>
#include <stdint.h>


int main(int argc, char **argv)
{
    char *ps[] = {"one", "two", "three", NULL}; // NULL признак конца
    for(uint32_t i=0; ps[i] ; i++)//ps[i]!=NULL
        printf("%s\n", ps[i]);
    return 0;
}

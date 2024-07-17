//Логирование sclog4c
#include <stdio.h>
#include "sclog4c.c"

int main(int argc, char *argv[])
{
    sclog4c_level = SL4C_ALL;
    logm(SL4C_DEBUG, "Program name: %s", argv[0]);
    return 0;
}

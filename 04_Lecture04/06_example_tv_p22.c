#include <stdio.h>

const int TV_PAL = 1;
const int TV_SECAM = 0;
const int TV_WORK = 1;
const int TV_TEST = 0;

int main(int argc, char **argv)
{
    int tv_system = TV_SECAM;
    int tv_input = TV_TEST;
    printf("TV Diagnostic %s %s",
        tv_system == TV_PAL ? "PAL" : "SECAM",
        tv_input ? "WORK" : "TEST");
    return 0;
}

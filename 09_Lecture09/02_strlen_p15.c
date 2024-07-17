#include <stdio.h>
#include <string.h>

int main(void) {
    char st[10] = "hello";
    printf("Sizeof = %llu\n", sizeof(st));
    printf("Strlen = %llu\n", strlen(st));
    return 0;
}

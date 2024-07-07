#include <stdio.h>
#include <string.h>

int main(void) {
    char st[10] = "hello";
    printf("Sizeof = %u\n", sizeof(st));
    printf("Strlen = %u\n", strlen(st));
    return 0;
}

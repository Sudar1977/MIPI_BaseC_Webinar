#include <stdio.h>

int main() {
    int c;
    do {
        c = getchar();
        while (c == ' ') c = getchar();
        while (c != ' ' && c != '\n' && c != EOF) putchar(c), c = getchar();
        putchar('\n');
        while (c != '\n' && c != EOF) c = getchar();
    } while (c != EOF);
    return 0;
}

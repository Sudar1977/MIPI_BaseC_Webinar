#include <stdio.h>

int main() {
    enum states { before, inside, after } state;
    int c;
    state = before;
    while ((c = getchar()) != EOF) {
        switch (state) {
            case before:
                if (c == '\n')
                    putchar('\n');
                else if (c != ' ')
                    putchar(c), state = inside;
            break;
            case inside:
                switch (c) {
                    case ' ':
                        state = after; break;
                    case '\n':
                        putchar('\n'), state = before;
                    break;
                    default: putchar(c);
                }
            break;
            case after:
                if (c == '\n')
                    putchar('\n'), state = before;
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    char c;
    for(;;) {
        printf( "\nPress any key, Q to quit: " );
        // Convert to character value
        scanf("%c", &c);
        if (c == 'Q')
            break;
    }
    return 0;
} // Loop exits only when 'Q' is pressed

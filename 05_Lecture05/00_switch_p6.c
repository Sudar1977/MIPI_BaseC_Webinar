#include <stdio.h>

int main ()
{
int input;
    scanf ("%d", &input);
    switch (input)
    {
        case 1 : printf ("one\n"); break;
        case 2 : printf ("two\n"); break;
        case 3 : printf ("three\n"); break;
        case 4 : printf ("four\n"); break;
        default : printf ("default\n");
    }
    return 0;
}

#include <stdio.h>

int main(void){
FILE *f;
    int sum = 0, n;
    f = fopen("in.txt", "r");
    while (fscanf (f, "%d", &n) == 1)
        sum += n;
    fclose (f);
    printf ("%d\n", sum);
    return 0;
}

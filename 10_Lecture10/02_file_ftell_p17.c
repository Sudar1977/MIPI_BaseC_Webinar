#include <stdio.h>

int main(void){
FILE *f;
    static char filename[100]={0};
    size_t size;
    printf("Input file name: ");
    scanf("%s",filename);
    f = fopen (filename, "r");
    if (f != NULL) {
        fseek (f, 0, SEEK_END);
        size = ftell (f);
        fclose (f);
        printf ("File size of '%s' - %lu bytes.\n",filename, size);
    } else {
        printf ("Can't open file %s\n", filename);
    }
    return 0;
}

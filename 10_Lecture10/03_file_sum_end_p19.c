#include <stdio.h>

int main(void){
FILE *f;
    int sum = 0, n;
    signed char c;// обязательно signed! иначе зациклится
    f = fopen("in.txt", "r+"); // режим чтение и дозапись
    while ( (c=fgetc(f))!=EOF ) {
        if(c>='0' && c<='9') {
            sum += c-'0';
        }
    }
    fprintf (f, " %d", sum);
    fclose (f);
    return 0;
}

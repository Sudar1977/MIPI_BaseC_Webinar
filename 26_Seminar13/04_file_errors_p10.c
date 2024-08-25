#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *open;
    char name[] = "temperature_small2.csv";
    open = fopen(name, "r");
    if(open==NULL)
        return 1;
int Y,M,D,H,m,T,n_scan;
    while((n_scan = fscanf(open, "%d;%d;%d;%d;%d;%d", &Y, &M, &D, &H, &m, &T)) > 0)
    {
        if (n_scan < 6)
        {
            char s[20], c;
            n_scan = fscanf(open, "%[^\n]%c", s, &c);
            printf("Wrong format in line %s\n", s);
        }
        else
            printf("%d = %d;%d;%d;%d;%d;%d\n", n_scan, Y, M, D, H, m, T);
    }
    fclose(open);
    return 0;
}

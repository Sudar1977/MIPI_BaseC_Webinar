#include <stdio.h>
#include <conio.h>
#define N 3

int main(int argc, char **argv)
{
    FILE *open;
    char name[] = "temperature_small1.csv";
    open = fopen(name, "r");
        if(open==NULL)
            return 1;
int Y,M,D;
int r;
char ch=0;
    while((r = fscanf(open, "%d;%d;%d",&Y,&M,&D))>0)
    {
        if(r<N)
        {
            do
            {
                putchar(ch);
                ch=fgetc(open);
            } while(EOF!=ch && '\n'!=ch);
//пропускаем оставшиеся символы до конца файла
//или строки (на случай, если строка была
//чересчур длинной
            ch = 0;
            printf("\n");
        }
        else
            printf("%d = %d;%d;%d\n", r,Y,M,D);
    }
    return 0;
}

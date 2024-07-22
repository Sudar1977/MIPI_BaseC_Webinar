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
 int counter = 0;
int arr[3] = {0};
char ch;
    while((ch=fgetc(open))!=EOF)
    {
        if(ch==';')
        {
            counter++;
            if(counter>N)
                counter = 0;
        }
        else if(ch=='\n')
        {
            if(counter == 2)
                printf("%d = %d;%d;%d\n", counter, arr[0],arr[1],arr[2]);
            else
                printf("ERROR %d = %d;%d;%d\n", counter,arr[0],arr[1],arr[2]);
            counter = 0;
            arr[0]=arr[1]=arr[2]=0;
        }
        else if(ch>='0' && ch<='9')
            arr[counter] = arr[counter]*10 + ch - '0';
        else if(ch != 0xD)
            counter = 0;
    }
    return 0;
}

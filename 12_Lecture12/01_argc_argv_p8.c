#include <stdio.h>

int main(int argc, char *argv[])
{
    int size=0;
    for(int i=0; i<argc; i++)
    {
        printf("argc = %d, argv = %s\n", i, argv[i]);
        char* str = argv[i];
        if(str[0]=='-')
            switch (str[1])
            {
                case 'h'/* constant-expression */:
                    /* code */
                    printf("HELP\n");
                break;
                case 's':
                    scanf(argv[i+1],"%d",&size);
                    printf("%d %s %d\n",size,argv[i+1],i+1);
                break;
                default:
                break;
            }
    }
    return 0;
}

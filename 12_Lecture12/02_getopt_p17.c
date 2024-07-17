#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int rez=0;
    //opterr=0;Можно отключить вывод сообщений об ошибках, для этого надо где-то в
    //программе перед вызовом функции вставить opterr=0
    while ( (rez = getopt(argc,argv,"ab:C::d")) != -1)
    {
        switch (rez)
        {
            case 'a': printf("found argument \"a\".\n"); break;
            case 'b': printf("found argument \"b = %s\".\n",optarg); break;
            case 'C': printf("found argument \"C = %s\".\n",optarg); break;
            case 'd': printf("found argument \"d\"\n"); break;
            case '?': printf("Error found !\n");break;
        }
    }
}

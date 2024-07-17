//Логирование вручную
#include <stdio.h>

int main(int argc, char *argv[])
{
    fprintf(stderr,"Debug message\n");
    fprintf(stdout,"Stdout message\n");
    return 0;
}

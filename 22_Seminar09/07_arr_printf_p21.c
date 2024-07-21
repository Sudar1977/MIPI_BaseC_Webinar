#include <stdio.h>

int main(int argc, char **argv)
{
    {
        int matr[3][2];
        int *pm;
        pm = (int*)matr;
        //~ pm[1][1] = 123;  //ТАК НЕЛЬЗЯ
        *(pm+2*1+1)=123;
        printf("%d\n",matr[1][1]);
    }
    {
        
    }
    return 0;
}

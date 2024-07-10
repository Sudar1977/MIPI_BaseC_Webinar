#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[255] = {2,3};
    int capacity = 2;
    int i,j;
    for(i=4;i<255;++i)
    {
        int isPrime=1;
        for(j=0;j<capacity;++j)
            if(i%arr[j] ==0)
            {
                isPrime=0;
                break;
            }
        if(isPrime)
            arr[capacity++]=i;
    }
    for(i=0;i<capacity;++i)
        printf("%d ",arr[i]);
    return 0;
}

#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

int Input(int* arr, int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return i;
}

void Print(int *arr,int len)
{
    int i;
    for (i = 0; i < len; i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void Mult(int *arr,int len,int k)
{
    int i;
    for (i = 0; i < len; i++)
        arr[i]*=k;
}

int main(int argc, char **argv)
{
    int arr[SIZE]={0};
    Input(arr,SIZE);
    int coef=3;
    Mult(arr,SIZE,coef);
    Print(arr,SIZE);
    return 0;
}

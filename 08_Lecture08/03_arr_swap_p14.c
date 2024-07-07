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

int PosMin(int *arr,int len)
{
    int min=arr[0],i,pos=0;
    for (i = 1; i < len; i++)
        if (min > arr[i])
        {
            min = arr[i];
            pos = i;
        }
    return pos;
}

int PosMax(int *arr,int len)
{
    int max=arr[0],i,pos=0;
    for (i = 1; i < len; i++)
        if (max < arr[i])
        {
            max = arr[i];
            pos = i;
        }
    return pos;
}

void SwapArr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(int argc, char **argv)
{
    int arr[SIZE]={0};
    Input(arr,SIZE);
    SwapArr(arr,PosMin(arr,SIZE),PosMax(arr,SIZE));
    Print(arr,SIZE);
    return 0;
}

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

void SwapArr(int *arr,int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSort(int* arr, int n)
{
    int noSwap,i,j;
    for(i=n-1; i>=0; i--)
    {
        noSwap = 1;
        for(j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                SwapArr(arr,i,j);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

int main(int argc, char **argv)
{
    int arr[SIZE]={0};
    Input(arr,SIZE);
    BubbleSort(arr,SIZE);
    Print(arr,SIZE);
    return 0;
}

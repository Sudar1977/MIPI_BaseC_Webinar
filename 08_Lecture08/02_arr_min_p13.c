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

int Min(int *arr,int len)
{
    int min=arr[0],i;
    for (i = 0; i < len; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main(int argc, char **argv)
{
    int arr[SIZE]={0};
    Input(arr,SIZE);
    printf("Min = \t\t%d\n",Min(arr,SIZE));
    return 0;
}

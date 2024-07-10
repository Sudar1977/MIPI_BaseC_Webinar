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

// циклический сдвиг массива влево на 1 элемент
void shift_array_left(int a[], int size)
{
    int tmp=a[0];
    for (size_t i=0; i < size-1; i++ )
    {
        a[i] = a[i+1];
    }
    a[size-1] = tmp;
}

void swap(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//Реверс массива
void revers_array(int a[], int size)
{
    for(size_t i=0; i<size/2; i++)
    {
        swap(&a[i], &a[size-1-i]);
    }
    return;
}

// Сортировка пузырьком
void buble_sort_array(int a[], int size)
{
    int i = 0;
    _Bool flag;
    do {
        flag = 0; // сбросить флаг
        for (int j = size-2; j >= i ; j-- )
            if ( a[j] > a[j+1] )
            {
                swap(&a[j], &a[j+1]);
                flag = 1; // поднять флаг если есть обмен
            }
            i++;
        }
    while ( flag ); // выход при flag = 0
}

// Сортировка выбором
void choose_sort_array(int a[], int size)
{
    int nMin=a[0];
    for(int i = 0; i < size-1 ; i ++ )
    {
        for (int j = i+1; j < size; j ++)
            if( a[j] < a[nMin] )
                nMin = j;
        if( nMin != i )
        {
            swap(&a[i], &a[nMin]);
        }
    }
}

int main(void)
{
    int arr[SIZE];
    Input(arr,SIZE);
    shift_array_left(arr,SIZE);
    Print(arr,SIZE);
    revers_array(arr,SIZE);
    Print(arr,SIZE);
    buble_sort_array(arr,SIZE);
    Print(arr,SIZE);
    choose_sort_array(arr,SIZE);
    Print(arr,SIZE);
    return 0;
}

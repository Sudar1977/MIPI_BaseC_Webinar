#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#define SIZE 5

int comparator (const int *, const int *);

/* сравнение двух целых V1 */
int comparator (const int *a, const int *b)
{
    return *a - *b;
    //~ return *b - *a;//обрасный порядок
}

/* сравнение двух целых V1 */
//int func_name(const void *arg1, const void *arg2)
//~ int comparator (const void *a, const void *b) {
    //~ return *(int*)a - *(int*)b;
    //~ // return *a - *b;//ОШИБКА
//~ }

void print(int n,int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d,",a[i]);
    }
    printf("\n");
}

int main(void)
{
    int a[SIZE]={3,5,3,2,1};
    print(SIZE,a);

    //~ qsort(a, SIZE, sizeof(int),comparator);
    //~ qsort(a, SIZE, sizeof (int), (int(*) (const void *, const void *)) comparator);
    qsort(a, SIZE, sizeof (int), (int(*) (const void *, const void *)) comparator);
    print(SIZE,a);
}

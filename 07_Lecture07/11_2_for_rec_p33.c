#include <stdio.h>

void iterFor(int start,int n)
{
    for(int i=start; i<n; i++)
        printf("%d\n",i);
}

//Рекурсивный способ:
void recursionFor(int i, int n)
{
    if(i<n)
    {
        printf("%d ", i);
        recursionFor(i+1, n);
    }
}
//Рекурсивный способ:
void recursionForStaic(int n)
{
    static int i=0;
    if(i<n)
    {
        printf("%d\n", i);
        i++;
        recursionForStaic(n);
    }
}


int main()
{
    iterFor(0,5);
    recursionFor(0,5);
    //~ recursionForStaic(5);
    //~ recursionForStaic(5);
    return 0;
}

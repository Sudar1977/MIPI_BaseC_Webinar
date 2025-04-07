#include <stdio.h>

enum bool {false = 0,true = 1};

void Input(enum bool isPrime[],int n)
{
    for (int i = 0; i < n; i++)
        isPrime[i] = true;
}

void Print(enum bool isPrime[],int n)
{
    for (int i = 2; i < n; i++)
        if (isPrime[i])
            printf("%d ",i);
}

void Rot(enum bool isPrime[],int n)
{
    for (int i = 2; i*i < n; i++)
    {
        if (isPrime[i])
            for(int j=i*i; j<=n; j+=i)
                isPrime[j] = false;
    }
}

int main()
{
    int n = 255;
    enum bool isPrime[n];
    Input(isPrime,n);
    Rot(isPrime,n);
    Print(isPrime,n);
    return 0;
}

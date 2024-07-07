#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    scanf ("%d", &n); // ввод количества элементов массива
    int arr[n];
    for (int i =0; i < n; i++) { // ввод массива
        scanf ("%d", &arr[i]);
    }
    return 0;
}

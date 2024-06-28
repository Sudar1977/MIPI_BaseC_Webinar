#include <stdio.h>

int max (int a, int b)
{
    if (a>b)
        return a;
    return b;
}
int main ()
{
    int a,b;
    scanf ("%d%d", &a,&b);
    // Чтобы объявлять переменные не в начале нужен С99
    int result = max (a,b); //Результат функции присваем maximum, имя функции не должно совпадать с именем переменной, int max = max (a,b); https : //www.onlinegbd.com
    printf ("max = %d\n", result);
    return 0;
}


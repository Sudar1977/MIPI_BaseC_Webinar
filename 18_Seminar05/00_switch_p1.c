#include <stdio.h>

int main()
{
int a;
    scanf ("%d", &a);
    switch (a)
{
    case 2: a *= 2 ; // Если expr == 2, то выполнится a += 5; из следующей  ветки 
    case 3: a += 5; break; // А здесь произойдет выход 
    case 4: a -= b; break;
    default: break;
}
    printf("%d", a); 
	return 0; //Завершить программу успешно
}


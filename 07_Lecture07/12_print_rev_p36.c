#include <stdio.h>

void print_rev (void)
{
 char ch;
    scanf ("%c", &ch); //ввод очередного символа
    if (ch != '.')
        print_rev (); //рекурсивный вызов для обработки оставшихся символов
    else
        return;
    printf ("%c", ch); //вывод символа
}

int main()
{
    print_rev();
    return 0;
}

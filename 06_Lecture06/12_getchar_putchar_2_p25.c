#include <stdio.h>
#include <locale.h>


int main ()
{
    setlocale(LC_ALL, ".utf-8");
    char character;
    puts("Введите символ, символ точки - выход('.'):");
    do
    {
        character = getchar(); // считать введённый со стандартного потока ввода символ
        putchar (character); // вывести этот символ
    } while (character != '.'); // пока введенный символ не точка
    return 0;
}

#include <stdio.h>
#include <conio.h>

int main ()
{
    char character;
    puts("Exit('.'):");
    do
    {
        character = getch(); // считать введённый со стандартного потока ввода символ
        if(character>='a' && character<='z') //все символы лежат подряд ‘a’=97, ‘b’=98, ‘c’=99, ...
            putchar('A' + (character-'a'));
        else
            putchar(character);
    } while (character != '.'); // пока введенный символ не точка
    return 0;
}// не работает в https://www.onlinegdb.com/

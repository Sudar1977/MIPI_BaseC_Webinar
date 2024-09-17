#include <stdio.h>
#include <conio.h>
//https://sourceforge.net/p/msys2/mailman/msys2-users/thread/81B27E05-0DCC-4FB2-9615-5627895BED40@crelg.com/ 

int main ()
{
    char character;  
    puts("Exit('.'):");
    do
    {
        character = _getch(); // считать введённый со стандартного потока ввода символ 
        if(character>='a' && character<='z') //все символы лежат подряд ‘a’=97, ‘b’=98, ‘c’=99, ...
            putchar('A' + (character-'a'));
        else
            putchar(character);
    } while (character != '.'); // пока введенный символ не точка
    return 0;
}// не работает в https://www.onlinegdb.com/

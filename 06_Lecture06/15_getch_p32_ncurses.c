#include <stdio.h>
//#include <conio.h>
#include <ncurses/ncurses.h>

int main ()
{
    char character;
    initscr(); 
    noecho();   
    //~ puts("Exit('.'):");
    printw("Exit('.'):\n");
    do
    {
        character = getch(); // считать введённый со стандартного потока ввода символ 
        if(character>='a' && character<='z') //все символы лежат подряд ‘a’=97, ‘b’=98, ‘c’=99, ...
            addch('A' + (character-'a'));
        else
            addch(character);
    } while (character != '.'); // пока введенный символ не точка
    return 0;
}// работает в https://www.onlinegdb.com/ #include <ncurses.h>

// В файле 1.xpm должен быть определён рисунок с именем dummy
// В нём — двухцветный рисунок, чёрная линия на любом (непрозрачном) фоне
#define NAME dummy

#include "1.xpm"
#include <stdint.h>
#include <stdio.h>

#define MAX_W (1000)

uint16_t array[MAX_W];


int parse_xpm(char** xpm, uint16_t *result)
{
    int width=0, height=0, colors=0, syms_per_pixel=0;
    char black;     // Сюда запомним, каким символом обозначается чёрный цвет (цвет линии)
    int  color = 1; // 0 - чёрный цвет, а нам нужно его найти как раз. Поэтому инициализируем любым ненулевым значением
    int line = 0;   // Текушая строка файла при его разборе

    sscanf (xpm[line++], "%d%d%d%d", &width, &height, &colors, &syms_per_pixel); // читаем первую строку

    //  width = width<MAX_W ? width : MAX_W; // /Дли примера считаем, что в этом отношении файл корректен, но можно и передавать в функцию размер массива для оценки

    if(colors != 2 || syms_per_pixel != 1) // если больше двух цветов или не один символ на элемент изображения (хм) — нафиг такое, лень парсить
    {
        return 0;
    }

    while (color != 0 && line  < colors+1) //Ищем чёрный цвет
    {
        sscanf(xpm[line++], "%c c #%x", &black, &color);
    }

    if (color != 0) // Чёрный цвет не найден
    {
        return 0;
    }

    for (; line < height; line++)
    {
        for (int pos = 0; pos < width ; pos ++)
        {
            if (NAME[line][pos] == black) // Как только на данной высоте наткнулись на чёрный цвет, тут же запоминаем высоту в массив; таким образом мы получаем форму сигнала,
                // снятую с нижней части чёрной линии на одноцветном фоне
            {
                array[pos] = height - line + 3; //+3, так как здесь у нас номер строки в файле, которая на три больше, чем номер строки в изображении (первые три строки - служебная информация: строка с размером и две строки с цветами)
            }
        }
    }
    return width;
}

int main (int arc, char ** argv)
{


    int width = parse_xpm(NAME, array);
    for (int i = 0; i < width; i++)
    {
        printf("%d ", array[i]);
    }
    putchar('\n');

    return 0;
}

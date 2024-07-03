#include <stdio.h>

int main() {
    int x, y,
    *ptr; // объявляем 3 переменные
    ptr = NULL; // инициализируем указатель null, нулевым значением
    //~ printf("x = %d y = %d ptr=%p\n",x,y,ptr);    
    x = -7;
    ptr = &x; // адрес переменной х записываем в переменную ptr
    y = *ptr; // Записываем в y значение на которое указывает указатель ptr
    *ptr = 3; // Записываем в ячейку (х) на которую ссылается указатель ptr число 3
    //std::cout << "x = " << x << " y = " << y; // вывод на экран x = 3 y = -7
    printf("x = %d y = %d ptr=%p\n",x,y,ptr);
    return 0;
}

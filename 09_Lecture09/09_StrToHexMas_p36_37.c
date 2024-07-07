#include <stdio.h>
#include <stdint.h>
#include <string.h>

//преобразование hex-цифры в dec-число
int CharToHex(char c)
{
    int result=-1;
    if (c>='0' && c<='9')
        result=c-'0';
    else if(c>='A' && c<='F')
        result=c-'A'+10;
    else if(c>='a' && c<='f')
        result=c-'a'+10;
    return result;
}
int StrToHexMas(char* Str,uint8_t* mas);

int main(int argc, char **argv)
{
uint8_t arr[10];
int len = StrToHexMas("AAa a 1 15",arr);
    printf("%s\n","AAa a 1 15");
    printf("%d\n",len);
    for(int i=0;i<len;i++)
        printf("%02x,",arr[i]);
    return 0;
}
//данные идут последовательно, не более двух сиволов
int StrToHexMas(char* Str,uint8_t* mas)
{
    int Result = 0; //полученное число
    int data = 0; //временная переменная
    int i = 0; //счетчик сиволов по строке
    int index = 0; //счетчик данных в массиве
    int StrLenght = strlen(Str);
    printf("%d\n",StrLenght);
    while(i<StrLenght)//выполняем цикл, пока есть символы в строке
    {
        Result=0; //обнуляем число
        data = CharToHex(Str[i++]);
        //анализируем очередной символ
        if(data>=0) //если это значащий символ
        {
            Result = data;
            if(i<StrLenght)//проверка на выход за границы массива
            {
                data = CharToHex(Str[i++]);//анализируем очередной символ
                if(data>=0) //если это данные
                {
                    Result *= 16;
                    Result += data;
                }
            }
            mas[index++]=Result; //кладем число в массив
        }
    }
    return index;
}

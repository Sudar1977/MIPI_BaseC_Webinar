#include <stdint.h>
#define SIZE 30

struct sensor
{
 uint8_t day;
 uint8_t month;
 uint16_t year;
 int8_t t;
};

void cgangeIJ(struct sensor* info,int i,int j);
//упорядочивающую его по неубыванию температуры
void SortByT(struct sensor* info,int n);
unsigned int DateToInt(struct sensor* info);
//упорядочивающую его по дате
void SortByDate(struct sensor* info,int n);
void AddRecord(struct sensor* info,int number,
uint16_t year,uint8_t month,uint8_t day,int8_t t);
int AddInfo(struct sensor* info);
void print(struct sensor* info,int number);

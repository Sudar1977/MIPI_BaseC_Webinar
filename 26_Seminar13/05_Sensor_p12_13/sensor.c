#include <stdio.h>
#include "sensor.h"
#include <string.h>

void cgangeIJ(struct sensor *info, int i, int j)
{
    struct sensor temp;
    temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}
// упорядочивающую его по неубыванию температуры
void SortByT(struct sensor *info, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (info[i].t >= info[j].t)
                cgangeIJ(info, i, j);
}

int CompareDate(const void *x,const void *y)
{
    struct sensor *a = (struct sensor *)x;
    struct sensor *b = (struct sensor *)y;
    if ((a->year - b->year) != 0)
        return a->year - b->year;
    else if ((a->month - b->month) != 0)
        return a->month - b->month;
    else if ((a->day - b->day) != 0)
        return a->day - b->day;
    else if ((a->hour - b->hour) != 0)
        return a->hour - b->hour;
    else if ((a->t - b->t) != 0)
        return a->t - b->t;
    return 0;
}

unsigned int DateToInt(struct sensor *info)
{
    return info->year << 16 | info->month << 8 | info->day;
}
// упорядочивающую его по дате
void SortByDate(struct sensor *info, int n)
{
    for (int i = 0; i < n; ++i)
        for (int j = i; j < n; ++j)
            if (CompareDate(info + i, info + j) > 0)
                //~ if(DateToInt(info+i)>= DateToInt(info+j))
                cgangeIJ(info, i, j);
}
void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, int8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].t = t;
}

int AddInfo(struct sensor *info)
{
    int counter = 0;
    AddRecord(info, counter++, 2021, 9, 16, 10, 9);
    AddRecord(info, counter++, 2022, 9, 2, 11, -9);
    AddRecord(info, counter++, 2021, 1, 7, 23, 8);
    AddRecord(info, counter++, 2021, 9, 5, 1, 1);
    return counter;
}
void print(struct sensor *info, int number)
{
    printf("===================================\n");
    for (int i = 0; i < number; i++)
        printf("%04d-%02d-%02d h=%02d t=%3d\n",
               info[i].year,
               info[i].month,
               info[i].day,
               info[i].hour,
               info[i].t);
}
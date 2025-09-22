#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30

struct sensor {
 uint8_t day;
 uint8_t month;
 uint16_t year;
 int8_t t;
};

void cgangeIJ(struct sensor info[],int i, int j)
{
struct sensor temp;
    temp=info[i];
    info[i]=info[j];
    info[j]=temp;
}
//упорядочивающую его по неубыванию температуры
void SortByT(struct sensor* info,int n){
    for(int i=0; i<n; ++i)
        for(int j=i; j<n; ++j)
            if(info[i].t>=info[j].t)
                cgangeIJ(info,i,j);
}

unsigned int DateToInt(struct sensor* info){
    return info->year << 16 | info->month << 8 | info->day;
    //~ return info->year*366+info->month*12+info->day;

}

int Compare(struct sensor* a,struct sensor* b)
{
    if(a->year != b->year)
        return a->year - b->year;
    else if (a->month != b->month)
        return a->month - b->month;
    else
        return a->day - b->day;
}

//упорядочивающую его по дате
void SortByDate(struct sensor* info,int n){
    for(int i=0; i<n; ++i)
        for(int j=i; j<n; ++j)
            if(Compare(info+i,info+j)>0)
            //~ if(DateToInt(info+i)>= DateToInt(info+j))
                cgangeIJ(info,i,j);
}

void AddRecord(struct sensor info[],int number,
uint16_t year,uint8_t month,uint8_t day,int8_t t){
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].t = t;
}

struct data
{
    uint32_t number;
    struct sensor info[SIZE];
} d;

void load_bin(struct sensor* info,int number)
{
    //Проверка на открытие файла
    FILE* f = fopen("sensor.bin","rb");
    //Проверка на считанные данные
    fread(info,number*sizeof(struct sensor),1,f);
    fclose(f);
}

void save_bin(struct sensor* info,int number)
{
    FILE* f = fopen("sensor.bin","wb");
    fwrite(info,number*sizeof(struct sensor),1,f);
    fclose(f);
}

void load_bin_d(struct data* d)
{
    //Проверка на открытие файла
    FILE* f = fopen("sensor.bin","rb");
    //Проверка на считанные данные
    fread(&d->number,sizeof(d->number),1,f);
    fread(d->info,d->number*sizeof(struct sensor),1,f);
    fclose(f);
}

void save_bin_d(struct data* d)
{
    FILE* f = fopen("sensor.bin","wb");
    fwrite(&d->number,sizeof(d->number),1,f);
    fwrite(d->info,d->number*sizeof(d->info[0]),1,f);
    fclose(f);
}

int AddInfo(struct sensor* info){
int counter=0;
    AddRecord(info,counter++,2021,9,16,9);
    AddRecord(info,counter++,2022,9,2,-9);
    AddRecord(info,counter++,2021,1,7,8);
    AddRecord(info,counter++,2021,9,5,1);
    return counter;
}

void print(struct sensor* info,int number){
    printf("===================================\n");
    for(int i=0;i<number;i++)
        printf("%04d-%02d-%02d t=%3d\n",
        info[i].year,
        info[i].month,
        info[i].day,
        info[i].t);
}

int main(void)
{
    d.number=AddInfo(d.info);// ctrl+e
    print(d.info,d.number);
    save_bin_d(&d);
    printf("\nSort by t\n");
    SortByT(d.info,d.number);
    print(d.info,d.number);
    printf("\nSort by date\n");
    //~ SortByDate(d.info,d.number);
    qsort(d.info,d.number,sizeof(d.info[0]),Compare);
    print(d.info,d.number);
    load_bin_d(&d);
    print(d.info,d.number);
    return 0;
}

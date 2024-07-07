#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define STR_SIZE 30
#define STUDEN_NUMBER 200

struct student {
    char surname[STR_SIZE];
    char name[STR_SIZE];
    uint8_t age;
};
//возраст самого старшего человека;
int Eldest(struct student* course,int number){
    int max = course->age;
    for(int i=1;i<number;i++)
        if(max < (course+i)->age)
            max = (course+i)->age;
    return max;
}

//количество людей с заданным
//именем (имя также является
//параметром функции);
int SameNameNumber(struct student* course,int number,char* name)
{
    int counter = 0;
    for(int i=0;i<number;i++)
        if(!strcmp(course[i].name,name))
            counter++;
    return counter;
}

//количество людей, у которых есть
//однофамильцы;
int Namesakes(struct student* course,int number){
    int counter=0;
    for(int i=0;i<number-1;i++)
        for(int j=i+1;j<number;j++)
            if(!strcmp(course[i].surname, course[j].surname))
            {
                counter++;
                break;
            }
    return counter;
}

void AddStudent(struct student* course,
int number,char* surname,char* name,int age){
    course[number].age = age;
    strcpy(course[number].name,name);
    strcpy(course[number].surname,surname);
}

void print(struct student* course,int number){
    for(int i=0;i<number;i++)
        printf("%s\t%s\t%d\n",
        course[i].surname,
        course[i].name,
        course[i].age);
}

int AddCourse(struct student* course){
    int c=0;
    AddStudent(course,c++,"Ivanov","Ivan",18);
    AddStudent(course,c++,"Petrov","Ivan",19);
    AddStudent(course,c++,"Petrov","Ivan",19);
    AddStudent(course,c++,"Petrov","Ivan",19);
    AddStudent(course,c++,"Petrov","Ivan",19);
    AddStudent(course,c++,"Ivanov","Vasily",44);
    return c;
}

int main(void)
{
    struct student course1[STUDEN_NUMBER]; // массив из 200 структур
    struct student course2[STUDEN_NUMBER]; // массив из 200 структур
    int number1=AddCourse(course1);
    int number2=AddCourse(course2);
    print(course1,number1);
    printf("Eldest student = %d\n",Eldest(course1,number1));
    char* name = {"Ivan"};
    printf("Name %s number = %d\n",name,SameNameNumber(course1,number1,name));
    printf("Same surname number = %d\n",Namesakes(course1,number1));
    return 0;
}

// Пример организации стека как однонаправленного списка
#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct list {
    datatype value;
    struct list * next;
}stack;

void push(stack **p,datatype data)
{
    stack *ptmp;
    ptmp=malloc(sizeof(stack));
    ptmp->value=data;
    ptmp->next=*p;
    *p=ptmp;
}

_Bool empty_stack(stack *p) {
    return p==NULL;
}

datatype pop(stack **p){
    stack *ptmp=*p;
    datatype c;
    if(empty_stack(*p))
        exit (1); // Попытка взять из пустого стека
    c=ptmp->value;
    *p=ptmp->next;
    free(ptmp);
    return c;
}

int main(){
    stack *p=NULL; // Важно для корректной работы присвоить NULL
    for(int i=1;i<=5; i++)
        push(&p,i);
    for(int i=1;i<=5; i++)
        printf("%d\n",pop(&p)); // 5 4 3 2 1
    return 0;
}

// Пример реализации очереди при помощи однонаправленного списка
#include <stdio.h>
#include <stdlib.h>

// #define DEBUG
#ifdef DEBUG
    #define D if(1)
#else
    #define D if(0)
#endif

FILE* log_func;
FILE* log_for;



typedef int datatype;

typedef struct list
{
    datatype value;
    struct list *next;
} queue;

_Bool empty_queue(queue *p)
{
    return p == NULL;
}

void enqueue(queue **pl, datatype data)
{
    D printf("enqueue %p %d\n", *pl, data);
    fprintf(log_func,"enqueue %p %d\n", *pl, data);
    fflush(log_func);
    queue *elem = malloc(sizeof(struct list));
    elem->value = data;
    elem->next  = NULL;
    if(*pl==NULL)
    {
        *pl = elem;
    }
    else
    {
        queue *ptmp;
        for (ptmp = *pl; ptmp; ptmp = ptmp->next)//error
        // for (ptmp = *pl; ptmp->next; ptmp = ptmp->next)
        {}
        D printf("for %p %d\n", ptmp, data);    
        fprintf(log_for,"for %p %d\n", ptmp, data);
        fflush(log_for);//если забыли, то пусто
        ptmp->next = elem;
    }
}

void print_list(struct list *pl)
{
    while (pl)
    {
        printf("%d ", pl->value);
        pl = pl->next;
    }
    printf("\n");
}

int main()
{
    queue *pq = NULL;
    log_func = fopen("log_func.txt","w");
    log_for  = fopen("log_for.txt","w");


    D printf("This is debug message\n");    
    for (int i = 1; i <= 5; i++)
        enqueue(&pq, i);
    print_list(pq);
    fclose(log_func);
    fclose(log_for);    
    return 0;
}

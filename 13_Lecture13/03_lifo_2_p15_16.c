// Пример организации стека через динамический массив
#include <stdio.h>
#include <stdlib.h>

typedef int datatype;

typedef struct stack
{
    datatype *item;
    int size;
    int sp;
} stack;

void init_stack(stack *st)
{
    st->size = 4;
    st->sp = 0;
    st->item = malloc(st->size * sizeof(datatype));
}

void delete_stack(stack *st)
{
    free(st->item);
}

void push(stack *st, datatype value)
{
    if (st->sp == st->size - 1)
    {
        st->size = st->size * 2;
        st->item = realloc(st->item,
                           st->size * sizeof(datatype));
    }
    st->item[st->sp++] = value;
}

void pop(stack *st, datatype *value)
{
    if (st->sp < 1)
    {
        printf("stack empty");
        exit(1);
    }
    *value = st->item[--(st->sp)];
}

int empty_stack(stack *st)
{
    return (st->sp < 1);
}

int main()
{
    stack st;

    int a, i;
    init_stack(&st);
    do
    {
        scanf("%d", &a);
        push(&st, a);
    } while (a != 0);
    for (i = 0; i < st.sp; i++)
        printf("%d ", st.item[i]);
    while (!empty_stack(&st))
    {
        pop(&st, &a);
        printf("%d ", a);
    }
    return 0;
}

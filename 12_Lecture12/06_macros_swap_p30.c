/* Открывающая скобка не должна быть отделена пробельными
символами от имени макроса. Если в списке параметров или в
тексте встречаются комментарии, каждый комментарий заменяется
на один символ пробела. */

#define SWAP(a,b) (a ^= b, b ^= a, a ^= b)
int main(void)
{
    int a=1,b=2;
    printf("%d %d\n",a,b);
    SWAP(a,b);
    printf("%d %d\n",a,b);
    return 0;
}

//~ 3. Реализовать работу с битовым массивом. функции
//~ int setbit(int index, int bit, uint32_t array[])
//~ int getbit(int index,uint32_t array[])),
//~ устанавливали (забирали) index-й бит по счёту в массиве array.

#include <stdio.h>
#include <stdint.h>

int setbit(int index, int bit, uint32_t array[]) //index=0..8*sizeof(array)
{
    bit = (bit != 0);
    int byte_number = index/8/sizeof(uint32_t);
    array [byte_number] &= ~(1  << (index%32)) ;
    array [byte_number] |= (bit << (index%32)) ;
    return bit;
}

int getbit(int index,uint32_t array[])
{
    int byte_number = index/8/sizeof(uint32_t);
    uint32_t bit = array[byte_number] & (1 << (index%32));
    return bit != 0;
}

//Конец решения


int main()
{
    uint32_t array[100] = {0};
    int index=0,b=0;
    scanf ("%d%d",&index, &b);
    if (index<0 || index > 8*sizeof(array))
        return 1;
    setbit (index,b,array);
    printf("%u\n", array[index/32]);
    printf("%d\n", getbit(index,array));

    return 0;
}

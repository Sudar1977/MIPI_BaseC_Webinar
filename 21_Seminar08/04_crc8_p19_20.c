#include <stdio.h>

/* Name : CRC-8
Poly : 0x31 x^8 + x^5 + x^4 + 1
Init : 0xFF
Revert: false
XorOut: 0x00
Check : 0xF7 ("123456789")
MaxLen: 15 байт(127 бит) - обнаружение одинарных, двойных, тройных
и всех нечетных ошибок */
unsigned char Crc8(unsigned char*pcBlock, unsigned int len)
{
    unsigned char crc=0xFF;
    unsigned int i;
    while (len--)
    {
        crc^=*pcBlock++;
        for (i =0; i <8; i++)
            crc=crc&0x80? (crc<<1) ^0x31:crc<<1;
    }
    return crc;
}

int main(int argc, char **argv)
{
    unsigned char arr[] =  {'1','2','3','4','5','6','7','8','9',0};
    arr[9] = Crc8(arr,9);
    printf("%x \n",Crc8(arr,9));
    arr[3]=7;
    printf("%x \n",Crc8(arr,9));    
    return 0;
}


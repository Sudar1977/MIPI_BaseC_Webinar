#include <stdio.h>

int main(void){
    unsigned int i = 0x31323334, u=0;
    FILE *f = fopen ("out.bin", "wb");
    fwrite (&i, sizeof (int), 1, f); // данные запишутся в формате little-endian
    fclose(f);

    f = fopen ("out.bin", "rb");
    fread (&u, 1, 1, f);
    fclose(f);
    printf("u = %x\n",u); // u = 34
    return 0;
}

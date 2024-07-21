#include <stdio.h>
#define SIZE 3

float scalar(float*arrA,float*arrB,int len)
{
    float result = 0;
    for(int i=0;i<len;i++)
    {
        result += arrA[i]*arrB[i];
      //~ result += *(arrA+i) * *(arrB+i);
//      result += *(float*)(arrA+i) * *(float*)(arrB+i);     
//      printf("%f,%f,%f\n",result,*(arrA+i),*(arrB+i));
    }
    return result;
}

int main(int argc, char **argv)
{
    float arrA[SIZE]={1,2,3};
    float arrB[SIZE]={1,2,3};
    //float arrC[SIZE]={1,2,3};
    printf("%f",scalar(arrA,arrB,SIZE));
    //Print(arrC,SIZE);
    return 0;
}

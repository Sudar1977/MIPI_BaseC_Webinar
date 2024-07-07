#include "stdafx.h" 
#include <conio.h> 
#include <math.h> 
#include <locale.h> 
#include <windows.h> 
#include <string.h> 
 
extern float END = 0.000001; 
double teylor(double summ, double z, int n); 
float x; 
float VAL, LASTVAL; 
long float z=1; 
long float summ=1; 
float d=1; 
int n=0; 

int main(){ 
    setlocale( LC_ALL,"Russian" ); 
    printf("Рекурсия. Ряд Тейлора. Косинус.\n"); 
    printf("Введите икс:"); 
    scanf("%f", &x); 
    teylor(0,z,0); 
    printf("Cos = %lf\n", d); 
    getch(); 
}

double teylor(double summ, double z, int n){ 
    if (x==0) return 1; 
    else if (fabs(z)>END){ 
        n+=1; 
        z=(-1)*z*x*x/(2*n*(2*n-1)); 
        d=d+z; 
        return summ=teylor(summ+d, z, n); 
    } 
}


#include <math.h> 
#include <locale.h> 
#include <stdio.h> 

float const END = 0.000001; 

double teylor(double Xn, int n, double x,double sum) 
{ 
    if (fabs(Xn)>END) 
    { 
        n+=1; 
        Xn*=(-1)*x*x/(2*n*(2*n-1)); 
        sum+=Xn; 
        return teylor(Xn, n, x, sum); 
    } 
    return sum; 
}

int main() 
{ 
double x;  
    setlocale( LC_ALL,"Russian" ); 
    printf("Рекурсия. Ряд Тейлора. Косинус.\n"); 
    printf("Введите икс в радианах:"); 
    scanf("%lf", &x); 
    printf("Cos = %lf\n", teylor(1.0,0,x,1.0)); 
    printf("Cos = %lf\n", cos(x));  
    return 0; 
}


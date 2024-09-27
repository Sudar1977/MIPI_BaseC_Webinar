#include <stdio.h>
int main()
{ 
int a, b, c, sum, mult;
	scanf("%d%d%d", &a, &b, &c);
	sum  = a+b+c;
	mult = a*b*c;
	printf ("%d+%d+%d=%d\n", a, b, c, sum);
	printf ("%d*%d*%d=%d\n", a, b, c, mult);
return 0;
}


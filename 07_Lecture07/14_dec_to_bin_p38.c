#include <stdio.h>

void dec_to_bin(int n)
{
    if (n >= 2)
        dec_to_bin(n / 2);
    printf("%d", n % 2);
    //std::cout << n % 2;
}
int main()
{
 int n;
    printf("n -> ");
    //std::cout << "\n\nn -> ";
    scanf("%d",&n);
    //std::cin >> n;
    printf("Bin = ");
    //std::cout << "\n\nBin = ";
    dec_to_bin(n);
    return 0;
}

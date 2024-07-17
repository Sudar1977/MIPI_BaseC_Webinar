#include <stdio.h>
#include <inttypes.h>

void print_matrix_1 (int m, int n, int *a)
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", a[i * n + j]);
        }
        printf ("\n");
    }
}

void print_matrix_2 (int m, int n, int a[m][n])
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}




int main(void)
{
    int matr[3][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}}; // 3 строки и 5 столбцов
    print_matrix_1(3,5,(int*)matr);
    print_matrix_2(3,5,matr);
    return 0;
}

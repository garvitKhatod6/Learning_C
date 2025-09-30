//Q76: Check if a matrix is symmetric.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, isSymmetric = 1;
    printf("Enter matrix size (n x n): ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n && isSymmetric; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = 0;
                break;
            }

    if (isSymmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}

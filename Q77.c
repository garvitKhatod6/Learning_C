//Q77: Check if the elements on the diagonal of a matrix are distinct. 


#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    printf("Enter the order of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int diag[n];

    printf("Enter %d elements of the matrix:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}

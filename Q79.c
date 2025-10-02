//Q79: Perform diagonal traversal of a matrix. 



#include <stdio.h>

int main() {
    int n, m, i, j, row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int mat[n][m];
    printf("Enter elements (%d):\n", n * m);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    for (row = 0; row < n; row++) {
        i = row;
        j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }

    for (col = 1; col < m; col++) {
        i = n - 1;
        j = col;
        while (i >= 0 && j < m) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }
    printf("\n");
    return 0;
}

//Q75: Add two matrices.


#include <stdio.h>

int main() {
    int row, col;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int mat1[row][col], mat2[row][col], sum[row][col];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &mat2[i][j]);

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}

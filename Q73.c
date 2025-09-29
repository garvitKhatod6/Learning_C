//Q73: Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &m, &n);

    int arr[m][n], rowSum[m];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        rowSum[i] = sum;
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < m; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

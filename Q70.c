//Q70: Rotate an array to the right by k positions.


#include <stdio.h>

int main() {
    int n, k;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    k = k % n;

    int rotated[n];
    int index = 0;

    for (int i = n - k; i < n; i++) {
        rotated[index++] = arr[i];
    }

    for (int i = 0; i < n - k; i++) {
        rotated[index++] = arr[i];
    }

    printf("Array after rotating right by %d: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}

//Q65: Search in a sorted array using binary search. in C 


#include <stdio.h>
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            low = mid + 1; 
        else
            high = mid - 1; 
    }
    return -1; 
}

int main() {
    int n, key, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Element %d found at position %d\n", key, result + 1);
    else
        printf("Element %d not found in array\n", key);

    return 0;
}

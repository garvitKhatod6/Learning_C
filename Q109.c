/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/


#include <stdio.h>

int main() {
    int arr[100], n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter subarray size k: ");
    scanf("%d", &k);

    int max_sum = 0, current_sum = 0;

    for (int i = 0; i < k; i++)
        current_sum += arr[i];

    max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    printf("Maximum sum of subarray of size %d is %d\n", k, max_sum);
    return 0;
}

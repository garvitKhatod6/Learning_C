//Q43: Write a program to check if a number is a strong number


#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0, i, fact;

    printf("Enter a number to check if it's a Strong number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a Strong number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong number.\n", originalNum);
    }

    return 0;
}



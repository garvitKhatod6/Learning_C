//Q41: Write a program to swap the first and last digit of a number


#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, temp, digits = 0, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    int middlePart = num % (int) (1);
    int divisor = 1;
    for (int i = 0; i < digits; i++) {
        divisor *= 10;
    }
    middlePart = (num % divisor) / 10;

    swappedNum = lastDigit;
    swappedNum = swappedNum * divisor + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}


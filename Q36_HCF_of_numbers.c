//Q36: Write a program to find the HCF (GCD) of two numbers.


#include <stdio.h>

int main() {
    int num1, num2, i, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int min = (num1 < num2) ? num1 : num2;
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, gcd);
    return 0;
}

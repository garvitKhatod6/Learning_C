//Q39: Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() {
    int n, digit;
    int product = 0;  

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;      
        if (digit % 2 == 1) {   
            if (product == 0)   
                product = digit;
            else
                product *= digit;
        }
        n = n / 10;
    }

    if (product == 0)
        printf("No odd digits found.\n");
    else
        printf("Product of odd digits = %d\n", product);

    return 0;
}


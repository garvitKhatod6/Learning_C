//Q40: Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>

int main() {
    long long n, result = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0) {
        digit = n % 10;          
        if (digit == 0)
            result += 1 * place; 
        else
            result += 0 * place; 
        n = n / 10;             
        place *= 10;             
    }

    printf("1's complement = %lld\n", result);

    return 0;
}

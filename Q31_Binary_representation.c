//Q31: Write a program to take a number as input and print its equivalent binary representation.(Loops without Arrays/Strings)


#include <stdio.h>

int main() {
    int num, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int n = num;  // keep copy for printing

    while (num > 0) {
        int bit = num % 2;        // get last bit
        binary = binary + bit * place; // build binary as decimal digits
        place *= 10;              // move to next place
        num /= 2;                 // divide by 2
    }

    printf("Binary of %d = %d\n", n, binary);

    return 0;
}



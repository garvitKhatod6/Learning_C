// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, SI, CI;
    printf("Enter principal, rate, and time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    SI = (principal * rate * time) / 100;
    CI = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}
//Q64: Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    long long num;
    int digit, freq[10] = {0};
    int i, maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Digit occurring most times: %d (appears %d times)\n", mostFreqDigit, maxFreq);

    return 0;
}

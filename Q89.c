//Q89: Count frequency of a given character in a string.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    ch = tolower(ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}

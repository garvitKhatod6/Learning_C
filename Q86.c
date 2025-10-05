//Q86 :Check if a string is a palindrome.



#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }

    i = 0;
    j = strlen(str) - 1;

    while (i < j) {
        if (!isalpha(str[i])) {
            i++;
            continue;
        }
        if (!isalpha(str[j])) {
            j--;
            continue;
        }

        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}

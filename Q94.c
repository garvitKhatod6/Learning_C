//Q94 :Find the longest word in a sentence.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    while (str[i] != '\0') {
        if (!isspace((unsigned char)str[i])) {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    word[j] = '\0';
    if (j > maxLen) {
        maxLen = j;
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}

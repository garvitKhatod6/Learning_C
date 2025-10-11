//Q93: Check if two strings are anagrams of each other.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str1[200], str2[200];
    int freq[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha((unsigned char)str1[i])) {
            freq[tolower((unsigned char)str1[i]) - 'a']++;
        }
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (isalpha((unsigned char)str2[i])) {
            freq[tolower((unsigned char)str2[i]) - 'a']--;
        }
    }

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are ANAGRAMS of each other.\n");
    return 0;
}

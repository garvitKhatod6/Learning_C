//Q92: Find the first repeating lowercase alphabet in a string.


#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    int freq[26] = {0};  
    int i;
    char ch = '\0';       

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;

            if (freq[str[i] - 'a'] == 2) { 
                ch = str[i];
                break;
            }
        }
    }

    if (ch != '\0')
        printf("First repeating lowercase alphabet: %c\n", ch);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}

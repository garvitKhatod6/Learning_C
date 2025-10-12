//Q96: Reverse each word in a sentence without changing the word order.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(void) {
    char str[200];
    char *wordStart = NULL;
    char *ptr;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    ptr = str;

    while (*ptr) {
        if (!isspace((unsigned char)*ptr) && wordStart == NULL) {
        
            wordStart = ptr;
        }

        if ((isspace((unsigned char)*ptr) || *(ptr + 1) == '\0') && wordStart != NULL) {
            if (isspace((unsigned char)*ptr))
                reverse(wordStart, ptr - 1);
            else
                reverse(wordStart, ptr);
            wordStart = NULL;
        }

        ptr++;
    }

    printf("Sentence after reversing each word:\n%s\n", str);

    return 0;
}

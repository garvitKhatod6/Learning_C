//Q100: Print all sub-strings of a string.


#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];
    int len, i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);

    printf("\nAll substrings of \"%s\":\n", str);

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

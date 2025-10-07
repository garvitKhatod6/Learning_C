//Q90: Toggle case of each character in a string.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str[200];

    printf("Enter a string: ");
    if (!fgets(str, sizeof str, stdin)) {
        return 0; // read error or EOF
    }

    // Remove newline if present
    str[strcspn(str, "\n")] = '\0';

    // Toggle case (use unsigned char when calling ctype functions)
    for (size_t i = 0; str[i] != '\0'; ++i) {
        unsigned char uc = (unsigned char)str[i];
        if (islower(uc))
            str[i] = (char) toupper(uc);
        else if (isupper(uc))
            str[i] = (char) tolower(uc);
    }

    printf("Toggled string: %s\n", str);
    return 0;
}

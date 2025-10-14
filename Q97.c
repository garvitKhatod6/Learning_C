//Q97: Print the initials of a name.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char name[200];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Initials: ");

    if (isalpha((unsigned char)name[0]))
        printf("%c", toupper((unsigned char)name[0]));

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && isalpha((unsigned char)name[i])) {
            printf(".%c", toupper((unsigned char)name[i]));
        }
    }

    printf(".\n");
    return 0;
}

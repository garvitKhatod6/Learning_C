/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/


#include <stdio.h>

int main() {
    int i, j;
    int groupSizes[] = {1, 2, 5, 3, 1};
    int k;

    for (k = 0; k < 5; k++) {
        for (i = 0; i < groupSizes[k]; i++) {
            printf("*\n");
        }
        if (k != 4) 
            printf("\n");
    }

    return 0;
}

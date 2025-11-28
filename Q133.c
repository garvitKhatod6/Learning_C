/*Q133: Create an enum for months and print how many days each month has.*/



#include <stdio.h>
#include <string.h>

enum month {
    JAN = 31,
    FEB = 28,
    MAR = 31,
    APR = 30,
    MAY = 31,
    JUN = 30,
    JUL = 31,
    AUG = 31,
    SEP = 30,
    OCT = 31,
    NOV = 30,
    DEC = 31
};

int main() {
    char s[20];

    printf("Enter month (JAN, FEB, MAR...): ");
    scanf("%s", s);

    enum month m;

    if (strcmp(s, "JAN") == 0) m = JAN;
    else if (strcmp(s, "FEB") == 0) m = FEB;
    else if (strcmp(s, "MAR") == 0) m = MAR;
    else if (strcmp(s, "APR") == 0) m = APR;
    else if (strcmp(s, "MAY") == 0) m = MAY;
    else if (strcmp(s, "JUN") == 0) m = JUN;
    else if (strcmp(s, "JUL") == 0) m = JUL;
    else if (strcmp(s, "AUG") == 0) m = AUG;
    else if (strcmp(s, "SEP") == 0) m = SEP;
    else if (strcmp(s, "OCT") == 0) m = OCT;
    else if (strcmp(s, "NOV") == 0) m = NOV;
    else if (strcmp(s, "DEC") == 0) m = DEC;
    else {
        printf("Invalid month");
        return 0;
    }

    if (m == FEB)
        printf("28 or 29 days");
    else
        printf("%d days", m);

    return 0;
}

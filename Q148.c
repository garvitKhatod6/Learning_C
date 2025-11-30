#include <stdio.h>
#include <string.h>

typedef enum {
    NOT_SAME,
    SAME
} Compare;

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    Student s1, s2;
    Compare result;

    printf("Enter Student1 (name roll marks):\n");
    scanf("%s %d %d", s1.name, &s1.roll, &s1.marks);

    printf("Enter Student2 (name roll marks):\n");
    scanf("%s %d %d", s2.name, &s2.roll, &s2.marks);

    
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks)
    {
        result = SAME;
    } else {
        result = NOT_SAME;
    }

    if (result == SAME)
        printf("Same\n");
    else
        printf("Not Same\n");

    return 0;
}

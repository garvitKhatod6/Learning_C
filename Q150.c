//Q150: Use pointer to struct to modify and display data using -> operator.



#include <stdio.h>

typedef enum {
    FAIL,
    PASS
} Result;

typedef struct {
    char name[50];
    int roll;
    int marks;
    Result status;
} Student;

int main() {
    Student s;
    Student *ptr = &s;  

    printf("Enter name, roll and marks:\n");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    if (ptr->marks >= 40)
        ptr->status = PASS;
    else
        ptr->status = FAIL;

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}

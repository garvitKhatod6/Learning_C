//Q149: Use malloc() to allocate structure memory dynamically and print details.



#include <stdio.h>
#include <stdlib.h>

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
    Student *ptr = (Student*) malloc(sizeof(Student));

    printf("Enter name, roll and marks:\n");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    ptr->status = (ptr->marks >= 40) ? PASS : FAIL;

    printf("Name: %s | Roll: %d | Marks: %d\n",
           ptr->name, ptr->roll, ptr->marks);

    free(ptr);  
    return 0;
}

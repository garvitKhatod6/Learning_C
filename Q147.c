//Q147: Store employee data in a binary file using fwrite() and read using fread().



#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;

    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

   
    fp = fopen("employee.bin", "wb");
    if(fp == NULL){
        printf("Cannot open file!\n");
        return 1;
    }

    fwrite(&e, sizeof(struct Employee), 1, fp);
    fclose(fp);

 
    fp = fopen("employee.bin", "rb");
    if(fp == NULL){
        printf("Cannot open file!\n");
        return 1;
    }

    fread(&e_read, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("\nEmployee Data Read From File:\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}


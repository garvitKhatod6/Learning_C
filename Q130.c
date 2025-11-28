/*Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.*/


#include <stdio.h>
int main(){
    int n,roll,marks;
char file[100],name[100];
FILE *fp=NULL;
printf("enter the name of the file");
if((scanf("%s",file))!=1){
    fprintf(stderr,"invalid input");
    return 1;
}
printf("enter the number of students");
if((scanf("%d",&n))!=1 || n<=0){
    fprintf(stderr,"invalid input");
    return 1;
}

fp=fopen(file,"w");
if(fp==NULL){
    fprintf(stderr,"not able to open file");
    return 1;
}
for(int i=0;i<n;i++){
printf("enter details of student %d",i+1);
printf("enter the name");
scanf("%s",name);
printf("enter the roll");
scanf("%d",&roll);
printf("enter the marks");
scanf("%d",&marks);
fprintf(fp,"%s %d %d\n",name,roll,marks);
}
fclose(fp);
fp=fopen(file,"r");
if(fp==NULL){
    fprintf(stderr,"not able to open file");
    return 1;
}
while((fscanf(fp,"%s %d %d",name,&roll,&marks))==3){
    printf("name:%s | roll:%d | marks:%d " ,name,roll,marks);
}
fclose(fp);

    return 0;
}

/*Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.*/


#include <stdio.h>
int main(){
char filename[100];
FILE *fp=NULL;
int num,sum=0,count=0;
double average;
printf("enter the filename");
if((scanf("%s",filename))!=1){
    fprintf(stderr,"invalid input");
    return 1;
}
fp=fopen(filename,"r");
if(fp==NULL){
    fprintf(stderr,"file cannot be opened");
    return 1;
}
while((fscanf(fp,"%d",&num))==1){
sum+=num;
count++;
}
if(count==0){
    printf("no integers found");
    return 0;
}
fclose(fp);
average=(double)sum/count;
printf("sum : %d",sum);
printf("average:%.2f",average);

    return 0;
}
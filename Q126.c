/*Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
char filename[100];
FILE *fp=NULL;
int ch;
printf("enter the name of the file");
fgets(filename,sizeof(filename),stdin);
filename[strcspn(filename,"\n")]='\0';
fp=fopen(filename,"r");
if(fp==NULL){
    fprintf(stderr,"could not open the file");
    return 1;
}
while((ch=fgetc(fp))!=EOF){
    printf("%c",ch);
}
fclose(fp);
    return 0;
}
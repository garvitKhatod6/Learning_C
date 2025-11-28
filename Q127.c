/*Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.*/


#include <stdio.h>
#include <ctype.h>
int main(){
char input[1000];
char output[2000];
FILE *in=NULL;
FILE *out=NULL;
int ch;
printf("enter the name of the input file");
if((scanf("%255s",input))!=1){
    fprintf(stderr,"incorrect input");
    return 1;
}
printf("enter the name of the output file");
if((scanf("%255s",output))!=1){
    fprintf(stderr,"invalid input");
    return 1;
}
in=fopen(input,"r");
if(in==NULL){
    fprintf(stderr,"could not open the file");
    return 2;
}
out=fopen(output,"w");
if(out==NULL){
    fprintf(stderr,"could not open the file");
    fclose(in);
    return 2;
}
while((ch=fgetc(in))!=EOF){
    ch=toupper(ch);
    if((fputc(ch,out))==EOF){
        fprintf(stderr,"cannot write to the output file");
        fclose(in);
        fclose(out);
        return 3;
    }
}
printf("successfully wrote the input to output file");

    return 0;
}
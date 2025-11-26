/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.*/
#include <stdio.h>
#include <ctype.h>
int main(){
FILE *fp;
char ch;
int characters=0,words=0,lines=0;
int inword=0;
char filename[100];
printf("enter the filename");
scanf("%s",filename);
fp=fopen(filename,"r");
while((ch=fgetc(fp))!=EOF){
characters++;
if(ch=='\n')
lines++;
if(!isspace(ch)){
    if(inword==0){
        words++;
        inword=1;
    }
}
else{
    inword=0;
}

}
fclose(fp);
printf("total characters :%d",characters);
printf("total words: %d",words);
printf("total lines: %d",lines);

    return 0;
}
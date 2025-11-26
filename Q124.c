/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().*/



#include <stdio.h>
#include <stdlib.h>
int main(){
char s_name[100];
char d_name[100];
int ch;
FILE *source=NULL;
FILE *dest=NULL;
printf("enter the name of the source file");
if(scanf("%255s",s_name)!=1){
    fprintf(stderr,"invalid input\n");
    return 1;
}
printf("enter the name of the destination file");
if(scanf("%255s",d_name)!=1){
    fprintf(stderr,"invalid input");
    return 1;
}
source=fopen(s_name,"rb");
if(source==NULL){
    fprintf(stderr,"not able to open the source file");
    return 2;
}
dest=fopen(d_name,"wb");
if(dest==NULL){
    fprintf(stderr,"not able to open the destination file");
    fclose(source);
    return 3;
}
while((ch=fgetc(source))!=EOF){
    if((fputc(ch,dest))==EOF){
        fprintf(stderr,"error while copying to file %s",d_name);
        fclose(source);
        fclose(dest);
        return 4;
    }
}
fclose(source);
fclose(dest);
printf("file copies successfully to %s",d_name);

    return 0;
}
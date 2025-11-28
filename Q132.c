/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.*/



#include <stdio.h>
#include <string.h>
enum traffic{
    red,green,yellow
};
int main(){
char s[100];
printf("enter GREEN/YELLOW/RED");
scanf("%s",s);
enum traffic signal;
if(strcmp(s,"red")==0)
signal=red;
else if(strcmp(s,"green")==0)
signal=green;
else if(strcmp(s,"yellow")==0)
signal=yellow;
else
printf("invalid input");
switch(signal){
    case red:
    printf("STOP");
    break;
    case yellow:
    printf("WAIT");
    break;
    case green:
    printf("GO");
    break;
    default:
    printf("invalid input");
}

    return 0;
}
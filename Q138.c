//Q138: Print all enum names and integer values using a loop.


#include <stdio.h>
enum color{
    red,yellow,green
};
int main(){
const char *names[]={"red","yellow","green"};
int i;
for(i=red;i<=green;i++){
printf("%s-%d",names[i],i);
}

    return 0;
}
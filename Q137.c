//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.



#include <stdio.h>
#include <string.h>
enum user{
admin,user,guest
};
int main(){
char s[100];
printf("enter admin/user/guest");
scanf("%s",s);
enum user roles;
if(strcmp(s,"admin")==0)
roles=admin;
else if(strcmp(s,"user")==0)
roles=user;
else if(strcmp(s,"guest")==0)
roles=guest;
else{
printf("wrong input");
return 0;
}
switch(roles){
    case admin:
    printf("welcome admin");
    break;
    case user:
    printf("welcome user");
    break;
    case guest:
    printf("welcome guest");
    break;
    default:
    printf("wrong input");
}

    return 0;
}

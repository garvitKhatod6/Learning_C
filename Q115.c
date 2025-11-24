/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".*/



#include <string.h>
 int masti(char *s1, char *s2){
    int i,j;
    int count1[26]={0};
    int count2[26]={0};
int l1=strlen(s1);
int l2=strlen(s2);
if(l1!=l2)
return 0;
for(i=0;i<l1;i++)
    count1[s1[i]-'a']++;
for(i=0;i<l2;i++)
count2[s2[i]-'a']++;
for(i=0;i<26;i++){
    if(count1[i]!=count2[i])
return 0;
}
return 1;
}
int main(){
char s1[100],s2[100];
printf("enter two strings");
scanf("%s %s",s1,s2);
if(masti(s1,s2))
printf("Anagram");
else
printf("not anagram");










    return 0;
}
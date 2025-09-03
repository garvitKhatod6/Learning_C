//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.


#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a,b,c: ");
    scanf("%d %d %d", &a,&b,&c);
    if (a==b==c)
    {
        printf("The Triangle is Equilateral");
    } 
     
    else if (a==b || b==c | a==c)
    {
        printf("The Triangle is Isosceles");
    }
    else if (a!=b!=c)
   {
    printf("The Triangle is Scalene");
   }
    return 0; 
}


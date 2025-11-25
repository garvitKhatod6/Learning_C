/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.*/


#include <stdio.h>
int main(){
int n,i,expectedsum=0,realsum=0;
printf("enter the size of the array");
scanf("%d",&n);
int arr[n];
for(i=1;i<=n;i++)
expectedsum+=i;
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    realsum+=arr[i];
}
printf("the missing element is %d",expectedsum-realsum);




    return 0;
}
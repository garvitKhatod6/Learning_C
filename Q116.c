/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".*/


#include <stdio.h>
int main(){
int n,i,j,k,fi=-1,si=-1;
printf("enter the size of an array");
scanf("%d",&n);
int arr[n];
printf("enter the elements of arrayt");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("enter the target number");
scanf("%d",&k);
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]+arr[j]==k){
            fi=i;
si=j;
break;
        }

    }
}
printf("%d %d",fi,si);









    return 0;
}
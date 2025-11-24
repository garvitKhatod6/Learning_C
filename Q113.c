/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.*/


#include <stdio.h>
int main(){
int n,i,j,temp,k;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter k");
scanf("%d",&k);
int arr[n];
printf("enter the elements of the array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
if(arr[i]>arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
    }
}
printf("the  %dth smallest number is %d ",k,arr[k-1]);









    return 0;
}


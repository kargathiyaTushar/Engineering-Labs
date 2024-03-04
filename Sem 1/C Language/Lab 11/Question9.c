#include <stdio.h>

// Question 9:Count total duplicate elements in an array 

void main(){
    int n,count=0,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value in arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
    }
    printf("Total number of duplicate elements is: %d\n",count);
}
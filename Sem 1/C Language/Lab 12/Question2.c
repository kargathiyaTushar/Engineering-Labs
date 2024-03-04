// Question 2:Count total number of negative elements in an array 

#include <stdio.h>

void main(){
    int i,n,negcount=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]<0){
            negcount++;
        }
    }
    printf("The number of negative elements in the array is: %d\n",negcount);
}
// Question 2:Count number of positive or negative number from an array of n numbers

#include <stdio.h>

void main(){
    int n,i,pos=0,neg=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the array element array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]>=0){
            pos++;            
        }
        else{
            neg++;
        }
    }
    printf("\nThe number of positive number is:%d\n The nuber of negative number is:%d\n",pos,neg);
}
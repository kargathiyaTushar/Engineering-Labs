// Question 1: Read n number from user and print in normal and reverse order

#include <stdio.h>

void main(){
    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array[%d]:",i);
        scanf("%d",&array[i]);
    }
    printf("Normal Order:\n");
    for(i=0;i<n;i++){
        printf("%d,",array[i]);
    }
    printf("\b. \n");
    printf("Reverse Order:\n");
    for(i=n-1;i>=0;i--){
        printf("%d,",array[i]);
    }
    printf("\b. \n");
}
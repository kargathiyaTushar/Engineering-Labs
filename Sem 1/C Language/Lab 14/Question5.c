// Question 5:Store n elements in an array and print the elements using pointer.

#include <stdio.h>

void main(){
    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array[%d]: ",i);
        scanf("%d",(array+i));
    }
    for(i=0;i<n;i++){
        printf("%d,",*(array+i));
    }
    printf("\b.\n");
}
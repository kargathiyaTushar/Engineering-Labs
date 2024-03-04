// Question 1: Copy all the elements of one array to another.

#include <stdio.h>

void main(){
    int i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n],b[n];

    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("\n");
    printf("Copy of array a is: ");
    for(i=0;i<n;i++){
        printf("%d,",b[i]);
    }
    printf("\b.\n");
}
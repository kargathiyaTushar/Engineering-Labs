#include <stdio.h>

// Question 7:Reverse elements of an array without using second array 

void main(){
    int n,i,j,t;
    printf("Enter the sizeof array:");
    scanf("%d",&n);
    int a[n];
 
    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
    }
    j=n-1;
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
        j--;
    }
    for(i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("\b.\n");
}
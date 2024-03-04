// Question 10:Insert a new value into a sorted array 

#include <stdio.h>

void main(){
    int i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                a[j]=a[j]+a[j+1];
                a[j+1]=a[j]-a[j+1];
                a[j]=a[j]-a[j+1];
            }
        }
    }
    printf("The sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    printf("\b.\n");
    int a[n+1];
    printf("Enter the new element: ");
    scanf("%d",&a[n]);
}
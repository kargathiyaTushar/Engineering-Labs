#include <stdio.h>

// Question 6:Delete all duplicate elements from an array 

void main(){
    int i,j,n,t,count=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into the array a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                a[j]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
            printf("%d,",a[i]);
        }
    }
    printf("\b. \n");
}
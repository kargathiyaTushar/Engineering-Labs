#include <stdio.h>

// Question 8:Sort elements of an array in an ascending order 

void main(){
    int n,i,j,m;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int array[n],temp[n];
    for(i=0;i<n;i++){
        printf("Enter value into array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<=n;i++){
        for(j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                m=array[j];
                array[j]=array[j+1];
                array[j+1]=m;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
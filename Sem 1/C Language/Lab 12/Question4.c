// Question 4:Search element in an array 

#include <stdio.h>

void main(){
    int i,n,m;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to find in the array:");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(a[i]==m){
            break;
        }
    }
    if(i<n){
        printf("The element %d is at index %d\n",m,i);
    }
    else{
        printf("The element %d does not exist in the array\n",m);
    }
}
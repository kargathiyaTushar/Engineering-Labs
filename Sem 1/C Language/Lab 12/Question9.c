// Question 9:Find two largest elements in a one dimensional array 

#include <stdio.h>

void main(){
    int i,l,sl,n;
    l=sl=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]>l){
            l=a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>sl && a[i]<l){
            sl=a[i];
        }
    }
    printf("Largest element is: %d and Second largest element is: %d\n",l,sl);
}
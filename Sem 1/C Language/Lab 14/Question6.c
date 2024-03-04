// Question 6:Copy one array onto another using pointers 

#include <stdio.h>

void main(){
    int n,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
        printf("Enter a value into a[%d]: ",i);
        scanf("%d",(a+i));
        *(b+i)=*(a+i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(b+i));
    }
    printf("\n");
}
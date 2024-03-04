// Question 10:Find missing numbers of sequence using array.
// (Sequence: 1,2,4,5,7,8,10), Missing Numbers:3,6,9. 

#include <stdio.h>

void main(){
    int n=10,i,a=1;
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value into arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;arr[i]!=0;i++){
        if(arr[i]!=a){
            printf("%d ",a++);
        }
        a++;
    }
    printf("\n");
}
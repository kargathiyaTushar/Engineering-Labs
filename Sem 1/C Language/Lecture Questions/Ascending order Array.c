#include <stdio.h>

void main(){
    int n=5,i,count=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter array element arr[%d]:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n-1);i++){
        if(arr[i]>arr[i+1]){
            count=1;
            break;
        }
    }
    if(count==0){
        printf("Array values is in Ascending order\n");
    }
    else{
        printf("Array values is not in Ascending order\n");
    }
}
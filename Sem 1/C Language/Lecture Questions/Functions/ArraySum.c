#include <stdio.h>

int arraysum(int arr[5]);
void main(){
    int i,arr[5];
    for(i=0;i<5;i++){
        printf("Enter value into arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The sum of the elemets of arr is: %d\n",arraysum(arr));
}

int arraysum(int arr[5]){
    int sum=0,i;
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    return sum;
}
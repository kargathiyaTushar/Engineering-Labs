#include <stdio.h>

// Question 6:Count numbers higher than the average of an array 

void main(){
    int n,i,sum=0,count=0;
    float avg;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the array element array[%d]:",i);
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++){
        if(avg<array[i]){
            count++;
        }
    }
    printf("Avg of array is: %f\n",avg);
    printf("The count of numbers higher than the average of the array is: %d\n",count);
}
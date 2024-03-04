// Question 4:Find Max, Min, Sum, Avg of given numbers from an array 

#include <stdio.h>

void main(){
    int n,i,max=0,min,sum=0;
    float avg;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the array element array[%d]",i);
        scanf("%d",&array[i]);
        sum+=array[i];
        min=array[0];
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    avg=(float)sum/n;
    printf("Max= %d\nMin= %d\nSum= %d\nAvg= %f\n",max,min,sum,avg);
}
#include <stdio.h>

// Question 2: Find the sum and average of diffreent numbers which are accepted by
// user as many as user wants.

void main(){
    int n,i=1,count;
    float sum=0;
    printf("Enter number of values you want to add and want average of:");
    scanf("%d",&count);
    while (i<=count){
        printf("Enter Value %d: ",i++);
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum of the values is: %f and the average of values is: %f\n",sum,(sum/count));
}
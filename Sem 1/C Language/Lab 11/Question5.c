// Question 5:Read five person height and weight and count the number of person
// having height greater than 170 and weight less than 50.

#include <stdio.h>

void main(){
    int i,count=0,height[5],weight[5];
    for(i=0;i<5;i++){
        printf("Enter the height of person %d:",i+1);
        scanf("%d",&height[i]);
        printf("Enter the weight of person %d:",i+1);
        scanf("%d",&weight[i]);
        printf("\n");

        if(height[i]>=170 && weight[i]<=50){
            count++;
        }
    }
    printf("Number of person having height greater than 170 and weight less than 50 is: %d\n",count);
}
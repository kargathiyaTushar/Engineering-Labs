// Question 2:Print sum of 1 to n numbers 

#include <stdio.h>

void main(){
    int i,n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum of 1 to %d is: %d \n",n,sum);
}
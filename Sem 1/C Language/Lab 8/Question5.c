// Question 5:Find factorial of the given number 

#include <stdio.h>

void main(){
    int i,n,factorial=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The factorial of %d is %d\n",n,factorial);
}
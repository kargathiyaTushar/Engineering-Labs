#include <stdio.h>

// Question 4: Find the factorial of given number

void main(){
    int i=1,n,fact=1;
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n){
        fact*=i++;
    }
    printf("The factorial of %d is: %d\n",n,fact);
}
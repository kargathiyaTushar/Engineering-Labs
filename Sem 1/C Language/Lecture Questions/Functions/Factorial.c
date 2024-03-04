#include <stdio.h>

int factorial(int n);
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d is: %d\n",n,factorial(n));
}

int factorial(int n){
    int fact=1,i;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
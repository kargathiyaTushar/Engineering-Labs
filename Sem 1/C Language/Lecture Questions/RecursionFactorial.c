#include <stdio.h>

int factorial(int);
void main(){
    int n;
    printf("Enter the number to find the factorial:");
    scanf("%d",&n);
    printf("%d",factorial(n));
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
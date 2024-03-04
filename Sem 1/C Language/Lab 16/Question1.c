// Question 1: Find factorial of a number using function and recursive function

#include <stdio.h>

int fact(int);
int factr(int);

void main(){
    int n;
    printf("Enter the number to find the factorial: ");
    scanf("%d",&n);
    printf("Factorial using function: %d\n",fact(n));
    printf("Factorial using recursion: %d\n",factr(n));
}
int fact(int n){
    int i,factorial=1;
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int factr(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
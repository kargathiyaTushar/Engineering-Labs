// Question 7: Find whether the given number is prime or not using flag.

#include <stdio.h>

void main(){
    int n,flag=0,i=2;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=(n/2)){
        if(n%i==0){
            flag=1;
            printf("The number is not prime.\n");
            break;
        }
        i++;
    }
    if(flag==0){
        printf("The number is prime.\n");
    }
}
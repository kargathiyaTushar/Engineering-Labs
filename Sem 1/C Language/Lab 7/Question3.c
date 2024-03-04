#include <stdio.h>

// Question 3: Find whether the given number is prime or not

void main(){
    int n,count=0,i=2;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=(n/2)){
        if(n%i==0){
            count++;
            printf("The given number is not prime.\n");
            break;
        }
        i++;
    }
    if(count==0){
        printf("The given number is prime.\n");
    }
}
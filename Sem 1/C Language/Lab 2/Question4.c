// Question 4: Check whether the given number is odd or even.

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.\n");
    }
}
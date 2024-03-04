// Question 3: Check whether given number is positive or negative.

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>0){
        printf("The number is positive.\n");
    }
    else{
        printf("The number is negative.\n");
    }
}
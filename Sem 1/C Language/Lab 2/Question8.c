// Question 8: Check whether the given number is odd or even using bitwise operator

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a&1){
        printf("Number is odd\n");
    }
    else{
        printf("Number is even\n");
    }
}
#include <stdio.h>

// Question 9: Check equality of two numbers without using arithmatic or comparison operator

void main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    if(a^b){
        printf("a and b are not equal\n");
    }
    else{
        printf("a and b are equal\n");
    }
}
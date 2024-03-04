// Question 3:Calculate sum of two numbers using pointers 

#include <stdio.h>

void main(){
    int a,b,*ptr_a,*ptr_b;
    ptr_a=&a, ptr_b=&b;
    printf("Enter the first number:");
    scanf("%d",ptr_a);
    printf("Enter the second number:");
    scanf("%d",ptr_b);
    printf("Addition of the two number is: %d\n",(*ptr_a+*ptr_b));
}
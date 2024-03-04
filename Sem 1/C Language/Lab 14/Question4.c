// Question 4:Swap value of two numbers using pointer 

#include <stdio.h>

void main(){
    int a,b,*ptr_a,*ptr_b;
    ptr_a=&a, ptr_b=&b;
    printf("Enter the value of a:");
    scanf("%d",ptr_a);
    printf("Enter the value of b:");
    scanf("%d",ptr_b);
    *ptr_a=(*ptr_a + *ptr_b);
    *ptr_b=(*ptr_a - *ptr_b);
    *ptr_a=(*ptr_a - *ptr_b);
    printf("Value of a is: %d \nValue of b is: %d\n",*ptr_a,*ptr_b);
}
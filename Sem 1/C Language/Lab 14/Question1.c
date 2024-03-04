// Question 1:Print value and address of a variable 

#include <stdio.h>

void main(){
    int a=10, *ptr;
    ptr=&a;
    printf("Value of a is: %d and Address of a is: %d\n",a,ptr);
}
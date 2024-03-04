// Question 5:Swap two numbers using call by value and call by reference 

#include <stdio.h>

void swap_value(int,int);
void swap_reference(int *a,int *b);
void main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    swap_value(a,b);
    swap_reference(&a,&b);
    printf("Call by Reference:\n");
    printf("Value of a is: %d\n",a);
    printf("Value of b is: %d\n",b);
}

void swap_value(int a, int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nCall be Value: \n");
    printf("Value of a is: %d\n",a);
    printf("Value of b is: %d\n\n",b);
}
void swap_reference(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
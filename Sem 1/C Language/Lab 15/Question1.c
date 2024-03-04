// Question 1:Add two numbers using function 

#include <stdio.h>
int sum(int a, int b);

void main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Sum of the two numbers is: %d\n",sum(a,b));
}
int sum(int a, int b){
    return a+b;
}
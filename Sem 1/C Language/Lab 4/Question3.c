// Question 3: Perform Addition, Subtraction, Multiplication and Divisionof 2 numbers
// as per user's choice using switch.

#include <stdio.h>

void main(){
    int a,b;
    char c;
    printf("Enter '+' for Addition\n");
    printf("Enter '-' for Subtraction\n");
    printf("Enter '*' for Multiplication\n");
    printf("Enter '/' for Dividion\n");
    printf("Enter the operator:");
    scanf("%c",&c);

    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    switch(c){
        case '+': printf("Addition of a and b is: %d\n",a+b); break;
        case '-': printf("Subtraction of a and b is: %d\n",a-b); break;
        case '*': printf("Multiplication of a and b is: %d\n",a*b); break;
        case '/': printf("Division of a and b is: %d\n",a/b);break;
        default: printf("Enter a Valid Operator\n"); break;
    }
}
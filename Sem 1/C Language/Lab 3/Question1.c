// Question 1: Perform Addition, Subtraction, Multiplication and Division of
// two numbers as per user's choice.

#include <stdio.h>

void main(){
    int a,b,ch;
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter '1' to perform Addition\n");
    printf("Enter '2' to perform Subtraction\n");
    printf("Enter '3' to perform Multiplication\n");
    printf("Enter '4' to perform Division\n");
    printf("Enter your choice:");
    scanf("%d",&ch);

    if(ch==1){
        printf("Addition of two numbers is: %d\n",a+b);
    }
    else if(ch==2){
            printf("Subtraction of two number is: %d\n",a-b);
    }
    else if (ch==3){
        printf("Multiplication of two numbers is: %d\n",a*b);
    }
    else if (ch==4){
        printf("Division of two number is: %f\n",(float)a/b);
    }
    else{
        printf("Invalid Input\n");
    }
}
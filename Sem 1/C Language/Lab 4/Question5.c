// Question 5: Check whether number is even or odd number using conditional operator.

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    (a%2==0)?printf("The number is even\n"):printf("The number is odd\n");
}
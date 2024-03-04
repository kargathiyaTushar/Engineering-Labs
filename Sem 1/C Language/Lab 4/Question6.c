// Question 6: Read three numbers, multiply largest number from first two numbers
// to third using switch

#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    switch(a>b){
        case 0: printf("Ans is: %d\n",b*c); break;
        case 1: printf("Ans is: %d\n",a*c); break;
        default: printf("Both numbers are equal\n");
    }
}
// Question 4: Input an integer number and check the last digit of number is
// even or odd

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter the integer:");
    scanf("%d",&a);
    b=a%10;
    if(b%2){
        printf("The last digit is odd\n");
    }
    else{
        printf("The last digit is even\n");
    }
}
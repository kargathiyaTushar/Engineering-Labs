#include <stdio.h>

// Question 1: Find out sum of first and last digit of a given number.

void main(){
    int n,m,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    sum+=(n%10);
    while(m!=0){
        if(m<=9){
            sum+=(m%10);
        }
        m/=10;
    }
    printf("Sum of first and last digits of %d is %d\n",n,sum);
}
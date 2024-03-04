// Question 2:Find maximum and minimum betweeen two numbers using function.

#include <stdio.h>
int max(int a,int b);
int min(int a,int b);

void main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("The maximum between %d and %d is: %d\n",a,b,max(a,b));
    printf("The mainimum between %d and %d is: %d\n",a,b,min(a,b));
}
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

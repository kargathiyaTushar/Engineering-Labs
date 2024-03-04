// Question 9: Multiply and divide a number by 2 without using multiplication/division operator

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    printf("a/2= %d\n",(a>>1));
    printf("a*2= %d\n",(a<<1));
}
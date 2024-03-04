#include <stdio.h>

// Question 9: Convert decimal number to binary

void main(){
    int d;
    printf("Enter the decimal number:");
    scanf("%d",&d);
    while(d>0){
        printf("%d",d%2);
        d/=2;
    }
    printf("\n");
}
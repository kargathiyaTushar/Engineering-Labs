#include <stdio.h>

// Question 2: Print the multiplication table of a given number

void main(){
    int i=1,n;
    printf("Enter the number to print the table:");
    scanf("%d",&n);
    while (i<=10){
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
    
}
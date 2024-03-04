#include <stdio.h>

// Question 3: Print numbers between two given numbers which is divisible by 2

void main(){
    int n,m,i;
    printf("Enter the first number:");
    scanf("%d",&n);
    printf("Enter the second number:");
    scanf("%d",&m);
    i=n;
    while (i<=m){
        if(i%2==0){
            printf("%d\t",i);
        }
        i++;
    }
    printf("\n");
}
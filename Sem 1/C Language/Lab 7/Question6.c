// Question 6: Check whether the given number is perfect or not

#include <stdio.h>

void main(){
    int n,m=0,i=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            m+=i;
        }
        i++;
    }
    if(n==m){
        printf("The given number is a perfect number.\n");
    }
    else{
        printf("The given numbre is not a perfect number.\n");
    }
}
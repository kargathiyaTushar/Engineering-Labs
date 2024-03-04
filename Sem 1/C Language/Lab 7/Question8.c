// Question 8: Check whether the given number is palindrome or not

#include <stdio.h>

void main(){
    int n,m=0,n1;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        m=(m*10)+(n1%10);
        n1/=10;
    }
    if (m==n){
        printf("The number is Palindrome.\n");
    }
    else{
        printf("The number is not Palindrome.\n");
    }
    
}
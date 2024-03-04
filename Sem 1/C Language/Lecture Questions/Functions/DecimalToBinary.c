#include <stdio.h>

int dectobin(int);

void main(){
    int n;
    printf("Enter the decimal number to find the binary: ");
    scanf("%d",&n);
    printf("Binary of %d is: %d",n,dectobin(n));
}

int dectobin(int n){
    if(n==0){
        return 0;
    }
    else{
        return (n%2 + 10*dectobin(n/2));
    }
}
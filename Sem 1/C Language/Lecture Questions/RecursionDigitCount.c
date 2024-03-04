#include <stdio.h>

int count(int);
void main(){
    int n,nd;
    printf("Enter the number: ");
    scanf("%d",&n);
    nd=count(n);
    printf("The number of digits in %d is: %d",n,nd);
}

int count(int n){
    int c=0;
    if(n==0){
        return 0;
    }
    else{
        return 1+count(n/10);
    }
}
// Question 9: Check whether the given number is Armstrong or not

#include <stdio.h>

void main(){
    int n,m=0,n1,nd=0,t,i;
    printf("Enter the number:");
    scanf("%d",&n);
    n1=n,nd=m=0;
    while(n1>0){
        nd++;
        n1/=10;
    }
    n1=n;
    while(n1>0){
        t=1;
        for(i=1;i<=nd;i++){
            t=t*(n1%10);
        }
        m+=t;
        n1/=10;
    }
    if(m==n){
        printf("The number is an Armstrong Number.\n");
    }
    else{
        printf("The number is not an Armstrong Number.\n");
    }
}
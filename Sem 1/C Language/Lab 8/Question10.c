// Question 10:Calculate X^Y without using power function and without using multiplication.

#include <stdio.h>

void main(){
    int x,y,i,j,ans,x1;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("Enter the value of Y:");
    scanf("%d",&y);
    ans=x1=x;
    for(i=1;i<y;i++){
        for(j=1;j<x;j++){
            ans+=x1;
        }
        x1=ans;
    }
    printf("%d^%d is: %d\n",x,y,ans);
}
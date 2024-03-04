// Question 4:Calculate x^y without using power function 

#include <stdio.h>

void main(){
    int x,y,i,ans=1;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        ans=ans*x;
    }
    printf("%d^%d is: %d\n",x,y,ans);
}
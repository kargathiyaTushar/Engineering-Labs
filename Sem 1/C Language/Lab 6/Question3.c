#include <stdio.h>

// Question 3: Calculate x^y without using power function

void main(){
    int i=1,x,y,ans;
    printf("Enter x:");
    scanf("%d",&x);
    ans=x;
    printf("Enter y:");
    scanf("%d",&y);
    while (i<=y){
        ans=ans*x;
        i++;
    }
    printf("x^y is %d\n",ans);
}
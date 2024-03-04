#include <stdio.h>

void main(){
    int i,j,n=1,fact;
    float ans=1,x,xp;
    printf("Enter the value of x:");
    scanf("%f",&x);
    for(i=1;i<=10;i++){
        fact=1;
        xp=1;
        for(j=1;j<=n;j++){
            fact=fact*j;
            xp*=x;
        }
        n++;
        ans+=(xp/fact);
    }
    printf("%f\n",ans);
}
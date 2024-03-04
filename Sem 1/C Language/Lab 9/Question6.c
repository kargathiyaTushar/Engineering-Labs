// Question 6:Estimate the value of the mathematical constant e. 

#include <stdio.h>

void main(){
    int i,j,n=1,fact;
    float ans=1;
    for(i=1;i<=10;i++){
        fact=1;
        for(j=1;j<=n;j++){
            fact*=j;
        }
        n++;
        ans+=(1.0/fact);
    }
    printf("%f\n",ans);
}
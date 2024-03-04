#include <stdio.h>

void main(){
    double n,i,p=0.00001,sqrt;
    int c=0;
    printf("Enter the number you want square root of:");
    scanf("%lf",&n);
    for(i=p;i<n/2;i+=a){
        if((i*i)>=(n-a) && (i*i)<(n+a)){
            sqrt=i;
            break;
        }
        c++;
    }
    printf("Number of calculations: %d\n",c);
    printf("Square root of %lf is: %lf\n",n,sqrt);
}
#include <stdio.h>

// Question 9:Swap first and last digits of a number 

void main(){
    int n,m=0,n1,fd,ld,d=10;
    printf("Enter the number:");
    scanf("%d",&n);
    ld=n%10;
    n1=n;
    for(n1;n1!=0;n1/=10){
        if(n1<=9){
            fd=n1;
        }
    }
    n1=n/10;
    m=fd;
    for(n1;n1!=0;n1/=10){
        if(n1>9){
            m=(n1%10)*d+m;
        }
        else{
            m=m+ld*d;
        }
        d*=10;
    }
    printf("%d\n",m);

}
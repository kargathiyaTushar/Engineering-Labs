// Question 10: Find HCF and LCM of two numbers

#include <stdio.h>

void main(){
    int a,b,lcm,hcf,i=1,m;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the first number:");
    scanf("%d",&b);
    m=(a>b)?a:b;
    while(1){
        if(m%a==0 && m%b==0){
            lcm=m;
            break;
        }
        m++;
    }
    while(i<=a && i<=b){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
        i++;
    }
    printf("LCM of %d and %d is: %d\n",a,b,lcm);
    printf("HCF of %d and %d is: %d\n",a,b,hcf);
}
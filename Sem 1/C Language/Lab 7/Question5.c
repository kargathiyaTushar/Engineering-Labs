// Question 5: Print the given number in reverse order

#include <stdio.h>

void main(){
    int n,n1,m=0;
    printf("Enter the number you want to reverse:");
    scanf("%d",&n);
    n1=n;
    while(n1!=0){
        m=(m*10)+(n1%10);
        n1/=10;
    }
    printf("The reverse of %d is %d\n",n,m);
}
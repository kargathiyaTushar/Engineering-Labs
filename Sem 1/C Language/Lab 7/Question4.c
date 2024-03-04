// Question 4: Print digits of a given number

#include <stdio.h>

void main(){
    int n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Digits of %d are:",n);
    m=n;
    while(m!=0){
        printf("%d,",m%10);
        m/=10;
    }
    printf("\b.\n");
}
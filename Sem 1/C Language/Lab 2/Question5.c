// Question 5: Find out the largest number from given three numbers.

#include <stdio.h>

void main(){
    int a,b,c,l;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            l=a;
        }
        else{
            l=c;
        }
    }
    else{
        if(b>c){
            l=b;
        }
        else{
            l=c;
        }
    }
    printf("The largest number is: %d\n",l);
}
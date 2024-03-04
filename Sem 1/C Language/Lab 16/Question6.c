// Question 6:Find power of any number using recursion 

#include <stdio.h>

int power(int a, int b);

void main(){
    int x,y;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of y:");
    scanf("%d",&y);
    printf("X^Y is: %d",power(x,y));
}

int power(int a, int b){
    if(b==1){
        return a;
    }
    else{
        return a*power(a,b-1);
    }
}
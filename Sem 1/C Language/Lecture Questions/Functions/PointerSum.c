// Make a function having return type void to add two numbers. 

#include <stdio.h>

void add(int,int,int *c);

void main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    add(a,b,&c);
    printf("The sum of %d and %d is: %d\n",a,b,c);
}
void add(int a, int b, int *c){
    *c=a+b;
}
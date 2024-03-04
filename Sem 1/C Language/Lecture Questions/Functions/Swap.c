#include <stdio.h>

void swap(int *a,int *b);

void main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Value of a: %d\nValue of b: %d\n",a,b);
}

void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
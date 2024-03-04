// Question 3: Print addition of 2 numbers (with & without scanf)

#include <stdio.h>

void main(){
    // Without scanf
    // int a=10,b=20,c;
    // c=a+b;
    // printf("Addition is: %d\n",c);

    // With scanf
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    c=a+b;
    printf("Addition is: %d\n",c);
}
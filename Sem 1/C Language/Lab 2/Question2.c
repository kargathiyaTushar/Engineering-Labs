// Question 2: Swap two numbers(Using temporary variable and without using 
// temporary variable)

#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);

    printf("Enter b:");
    scanf("%d",&b);

    //With temporary variable
    // c=a;
    // a=b;
    // b=c;
    // printf("a= %d and b= %d\n",a,b);

    //Without temporary variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a= %d and b= %d \n",a,b);
}
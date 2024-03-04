// Question 4: Find out the largest number from given 3 numbers using conditional operator

#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    a>b?(a>c?printf("%d is largest\n",a):printf("%d is largest\n",c)):(b>c?printf("%d is largest\n",b):printf("%d is largest\n",c));
}
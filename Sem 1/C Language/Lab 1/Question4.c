// Question 4: Print average of three numbers (with & without scanf)

#include <stdio.h>

void main(){
    // Without scanf
    // int a=10,b=20,c=30;
    // float avg=(a+b+c)/3.0;
    // printf("%f\n",avg);

    // With scanf
    int a,b,c;
    float avg;
    printf("Enter a:");
    scanf("%d",&a);
    
    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);
    avg=(a+b+c)/3.0;

    printf("Average of three numbers is: %f\n",avg);
}
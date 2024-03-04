// Question 4:Return the maximum of three floating point number 

#include <stdio.h>

float max(float,float,float);

void main(){
    float a,b,c;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    printf("The maximum of the three numbers is: %f\n",max(a,b,c));
}

float max(float a, float b, float c){
    return ((a>b)?((a>c)?a:c):((b>c)?b:c));
}
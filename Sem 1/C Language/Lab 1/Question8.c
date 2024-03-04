// Question 8: Print Temperature from Fahrenheit to Celsius

#include <stdio.h>

void main(){
    float f,c;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("The temperature in Celsius is: %f\n",c);
}
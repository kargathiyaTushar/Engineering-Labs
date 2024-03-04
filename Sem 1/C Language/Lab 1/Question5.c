// Question 5: Print area of circle

#include <stdio.h>

void main(){
    float pi=3.14,area,r;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    area=pi*r*r;
    printf("The area of the circle is: %f\n",area);
}
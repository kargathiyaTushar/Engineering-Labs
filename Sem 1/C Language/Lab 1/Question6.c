// Question 6: Print area of triangle

#include <stdio.h>

void main(){
    float height,base,area;
    printf("Enter the height of the triangle:");
    scanf("%f",&height);
    printf("Enter the length of base the triangle:");
    scanf("%f",&base);
    area=(height*base)/2.0;
    printf("The area of the triangle is: %f\n",area);
}
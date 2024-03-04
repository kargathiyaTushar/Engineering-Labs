#include <stdio.h>

// Question 2: Triangle Classification
void main(){
    int a,b,c;
    printf("Enter side a of the triangle:");
    scanf("%d",&a);
    printf("Enter side b of the triangle:");
    scanf("%d",&b);
    printf("Enter side c of the triangle:");
    scanf("%d",&c);

    if(a==b){
        if (a==c)
        {
            printf("The triangle is equilateral\n");
        }
        else{
            printf("The triangle is isosceles\n");
        }
    }
    else if (b==c)
    {
        if(b==a){
            printf("The triangle is equilateral\n");
        }
        else{
            printf("The triangle is isosceles\n");
        }
    }
    else if (c==a)
    {
        if(a==b){
            printf("The triangle is equilateral\n");
        }
        else{
            printf("The triangle is isosceles\n");
        }
    }
    else{
        printf("The triangle is sceles\n");
    }
    
}
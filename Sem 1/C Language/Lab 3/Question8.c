// Question 8: Read three sides of a triangle and check whether the triangle is isosceles,
// equilateral, scalene or right triangle triangle.

#include <stdio.h>

void main(){
    int a,b,c,x,y,z;
    printf("Enter side a:");
    scanf("%d",&a);
    printf("Enter side b:");
    scanf("%d",&b);
    printf("Enter side c:");
    scanf("%d",&c);
    if(a==b){
        if(a==c){
            printf("The triangle is Equilateral\n");
        }
        else{
            printf("The triangle is Isosceles\n");
        }
    }
    else if (a==c){
        if (a==b){
            printf("The triangle is Equilateral\n");
        }
        else{
            printf("The triangle is Isosceles\n");
        }
    }
    else if(b==c){
        if (b==a){
            printf("The triangle is Equilateral\n");
        }
        else{
            printf("The triangle is Isosceles\n");
        }
    }
    else{
        printf("The triangle is Sceles\n");
    }
    if(a>b){
        if(a>c){
            x=a,y=b,z=c;
        }
        else{
            x=c,y=a,z=b;
        }
    }
    else{
        if(b>c){
            x=b,y=a,z=c;
        }
        else{
            x=c,y=a,z=b;
        }
    }

    if(x*x==(y*y+z*z)){
        printf("The triangle is a Right Angled Triangle\n");
    }
    else{
        printf("The triangle is not a Right Angled Triangle \n");
    }
}
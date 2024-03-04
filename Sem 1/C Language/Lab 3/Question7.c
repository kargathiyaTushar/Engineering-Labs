// Question 7: Determine the roots of the equation ax^2 + bx + c = 0

#include <stdio.h>
#include <math.h>

void main(){
    int a,b,c;
    float r1,r2;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    if((b*b)>(4*a*c)){
        r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        printf("The roots of the equation are: r1= %f and r2= %f \n",r1,r2);
    }
    else{
        printf("The roots of this equation does not exist\n");
    }
}
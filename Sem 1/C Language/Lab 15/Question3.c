// Question 3:Count simple interest using function 

#include <stdio.h>
float simpleinterest(float,float,float);

void main(){
    float p,r,i,t;
    printf("Enter the Principal Amount: ");
    scanf("%f",&p);
    printf("Enter the Rate: ");
    scanf("%f",&r);
    printf("Enter the Time(in years): ");
    scanf("%d",&t);
    printf("The Simple Interest is: %f\n", simpleinterest(p,r,t));
}
float simpleinterest(float p, float r, float t){
    return (p*r*t)/100;
}
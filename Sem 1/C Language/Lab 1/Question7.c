//Question 7: Print Simple Interest

#include <stdio.h>

void main(){
    float principal, rate,time_period,simple_interest;
    printf("Enter the Principal amount:");
    scanf("%f",&principal);

    printf("Enter the Rate:");
    scanf("%f",&rate);

    printf("Enter the Time Period:");
    scanf("%f",&time_period);

    simple_interest=(principal*rate*time_period)/100;
    printf("The Simple Interest is: %f\n", simple_interest);
}
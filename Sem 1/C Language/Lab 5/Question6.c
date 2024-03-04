#include <stdio.h>
#include <math.h>

// Question 6: Print number and its square root for 0 to 9

void main(){
    int i=0;
    while(i<=9){
        printf("Number is: %d and its square root is: %zf \n",i,sqrt(i++));
    }
}
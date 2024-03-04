#include <stdio.h>

// Question 5: Get 10 numbers from user print count of odd, even numbers

void main(){
    int n,i=1,odd=0,even=0;
    while(i<=10){
        printf("Enter the number %d:",i++);
        scanf("%d",&n);
        if(n%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of even number is: %d \n Number of odd numbers is: %d\n",even,odd);
}
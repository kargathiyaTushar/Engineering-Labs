#include <stdio.h>

// Question 1: Print the sum of series 1-2+3-4+5-6+7...n

void main(){
    int i=1,sum=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
        i++;
    }
    printf("The sum of the series is: %d\n",sum);
}
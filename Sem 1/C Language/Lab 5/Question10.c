#include <stdio.h>

// Question 10: Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + … + n

void main(){
    int i=1,sum=0,n;
    printf("Enter n:");
    scanf("%d",&n);
    while((i*i)<=n){
        sum+=i*i;
        i++;
    }
    printf("The sum of the series is: %d\n",sum);
}
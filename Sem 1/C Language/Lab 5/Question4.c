#include <stdio.h>

// Question 4: Print sum of 1 to n numbers

void main(){
    int i=1,n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);

    while(i<=n){
        sum+=i++;
    }
    printf("%d\n",sum);
}
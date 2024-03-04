#include <stdio.h> 

void main(){
    int i,j,n,square=0;
    printf("Enter n:");
    scanf("%d",&n);
    
    // Square of 1 to n
    for(i=1;i<=n;i++){
        // Square of i or a number.
        for(j=1;j<=i;j++){
            square+=i;
        }
        printf("Square of %d is: %d\n",i,square);
        square=0;
    }
}
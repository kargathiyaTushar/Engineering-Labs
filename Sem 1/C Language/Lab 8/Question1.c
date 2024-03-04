// Question 1: Print 1 to 10 then modify program to print 1 to n

#include <stdio.h>

void main(){
    int i,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d,",i);
    }
    printf("\b. \n");
}
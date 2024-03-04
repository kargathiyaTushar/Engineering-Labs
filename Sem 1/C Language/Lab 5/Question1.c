#include <stdio.h>

// Question 1: Print 1 to 10 then modify program 1 to n using while and do while loop

void main(){
    int n,i=1;
    printf("Enter n:");
    scanf("%d",&n);

    // Using While
    while(i<=n){
        printf("%d\t",i++);
    }
    i=1;
    printf("\n");
    // Using Do While
    do{
        printf("%d\t",i++);
    } while (i<=n);
    printf("\n");
}
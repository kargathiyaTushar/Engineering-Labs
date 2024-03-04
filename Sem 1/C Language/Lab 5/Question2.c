#include <stdio.h>

// Question 2: Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop

void main(){
    int n,i=1;
    printf("Enter n:");
    scanf("%d",&n);
    // Using while
    while(i<=n){
        if(i%2==1){
            printf("%d\t",i);
        }
        i++;
    }
    printf("\n");
    // Using do while
    i=1;
    do{
        if(i%2==1){
            printf("%d\t",i);
        }
        i++;
    }while(i<=n);
    printf("\n");
}
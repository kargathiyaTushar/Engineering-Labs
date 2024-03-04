#include <stdio.h>

// Question 5: Find the factors of the given number

void main(){
    int i=1,n;
    printf("Enter the number whose factors you want to print:");
    scanf("%d",&n);
    printf("Factors of %d are:",n);
    while(i<=(n/2)){
        if(n%i==0){
            printf("%d,",i);
        }
        i++;
    }
    printf("\b. \n");
}
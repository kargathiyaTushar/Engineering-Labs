#include <stdio.h>

// Question 8: Convert given number in words.

void main(){
    int n,n1=0,m;
    printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    while(m!=0){
        n1=(n1*10)+(m%10);
        m/=10;
    }
    while(n1!=0){
        if(n1%10==0){
            printf("Zero ");
        }
        else if(n1%10==1){
            printf("One ");
        }
        else if(n1%10==2){
            printf("Two ");
        }
        else if(n1%10==3){
            printf("Three ");
        }
        else if(n1%10==4){
            printf("Four ");
        }
        else if(n1%10==5){
            printf("Five ");
        }
        else if(n1%10==6){
            printf("Six ");
        }
        else if(n1%10==7){
            printf("Seven ");
        }
        else if(n1%10==8){
            printf("Eight ");
        }
        else if(n1%10==9){
            printf("Nine ");
        }
        n1/=10;
    }
    printf("\n");
}
#include <stdio.h>

void main(){
    int i,j,n=5;
    for(i=9;i>=1;i--){
        for(j=9;j>=5;j--){
            if(j>i){
                printf(" ");
            }
        }
        for(j=1;j<=i;j++){
            if(j%2==0){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}
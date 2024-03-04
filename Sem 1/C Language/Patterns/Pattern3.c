#include <stdio.h>

void main(){
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<2*n;i++){
        if(i<=n){
            for(j=1;j<=(n-i);j++){
                printf(" ");
            }
            for(j=1;j<2*i;j++){
                if(j%2==1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            for(j=1;j<=i-n;j++){
                printf(" ");
            }
            for(j=1;j<(2*n-(i-n)*2);j++){
                if(j%2==1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
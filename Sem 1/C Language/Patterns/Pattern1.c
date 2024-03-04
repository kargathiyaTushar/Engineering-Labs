#include <stdio.h>

void main(){
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=(2*n-1);i++){
        if(i<=n){
            for(j=1;j<i;j++){
                printf(" ");
            }
            for(j=1;j<=(2*(n-i)+1);j++){
                if(j%2==1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        else{
            for(j=1;j<(n*2-i);j++){
                printf(" ");
            }
            for(j=1;j<=(2*(i-n)+1);j++){
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
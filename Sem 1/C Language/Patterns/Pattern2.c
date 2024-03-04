#include <stdio.h>

void main(){
    int i,j,n,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n");
    m=n;
    for(i=1;i<2*n;i++){
        if(i<=n){
            for(j=1;j<=n;j++){
                if(j<=m){
                    printf("%d ",j);
                }
                else{
                    printf("  ");
                }
            }
            for(j=n-1;j>=1;j--){
                if(j<=m){
                    printf("%d ",j);
                }
                else{
                    printf("  ");
                }
            }
            m--;
        }
        else{
            for(j=1;j<=n;j++){
                if((i-n+1)>=j){
                    printf("%d ",j);
                }
                else{
                    printf("  ");
                }
            }
            for(j=n-1;j>=1;j--){
                if((i-n+1)>=j){
                    printf("%d ",j);
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}
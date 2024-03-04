#include <stdio.h>

void main(){
    int a,n,bin_n[32],i;
    printf("Enter the number:");
    scanf("%d",&n);
    a=n;
    for(i=31;i>=0;i--){
        bin_n[i]=a%2;
        a/=2;
    }
    printf("The Binary of %d is:",n);
    for(i=0;i<=31;i++){
        printf("%d",bin_n[i]);
    }
    printf("\n");
}
#include <stdio.h>

void main(){
    int a,b,bin_a[32],bin_b[32],count=0,i;
    //Using Array:
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    for(i=31;i>=0;i--){
        bin_a[i]=a%2;
        bin_b[i]=b%2;
        a/=2;
        b/=2;
    }
    for(i=0;i<=31;i++){
        if(bin_a[i]!=bin_b[i]){
            count++;
        }

    }
    if(count==1){
        printf("Both the number are unit distance\n");
    }
    else{
        printf("Both the numbers are not unit distance and their binary distance is: %d\n",count);
    }
}
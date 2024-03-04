// Question 7:Print Pascal Triangle 

#include <stdio.h>

void main(){
    int i,j,number=1;
    for(i=0;i<=10;i++){
        number=1;
        printf("%d ",number);
        for(j=1;j<=i;j++){
            number*=((i-j+1)/j);
            printf("%d ",number);
        }
        printf("\n");
    }
}
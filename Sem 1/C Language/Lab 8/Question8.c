// Question 8:Print all ASCII character and their values 

#include <stdio.h>

void main(){
    for(int i=1;i<=128;i++){
        printf("%c: %d ",i,i);
    }
    printf("\n");
}
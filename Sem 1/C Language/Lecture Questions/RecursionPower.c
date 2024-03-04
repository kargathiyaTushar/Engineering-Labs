#include <stdio.h>

int power(int,int);

void main(){
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("%d",power(x,y));
}

int power(int x, int y){
    if(y==1){
        return x;
    }
    else{
        return x*power(x,y-1);
    }
}
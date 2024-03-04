#include <stdio.h>

void main(){
    int a=0,b=0,i,c;
    printf("Enter the number of term you want in Fibonacci:");
    scanf("%d",&i);
    for(i;i>0;i--){
        if(a==0&&b==0){
            printf("%d ",a);
            a++;
        }
        c=a+b;
        printf("%d ",c);
        a=c-a;
        b=c;
    }
    printf("\n");
}
#include <stdio.h>

int fibonacci(int);
void main(){
    int n,i;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for(i=0; i<n;i++){
        printf("%d ",fibonacci(i));
    }
}

int fibonacci(int i){
    if(i==0 || i==1){
        return i;
    }
    else{
        return (fibonacci(i-1)+fibonacci(i-2));
    }
}
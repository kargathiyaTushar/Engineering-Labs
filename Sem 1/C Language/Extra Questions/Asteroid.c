#include <stdio.h>
#include <stdlib.h>

void main(){
    int i,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        if(a[i]<0){
            if(abs(a[i]) < abs(a[i+1])){
                a[i+1]=0;
            }
            else{
                a[i+1]=0;
            }
        }
        if(a[i+1]<0){
            if(abs(a[i]) < abs(a[i+1])){
                a[i]=0;
            }
            else{
                a[i+1]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
            printf("%d,",a[i]);
        }
    }
    printf("\b.\n");
}
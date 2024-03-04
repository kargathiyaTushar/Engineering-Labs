#include <stdio.h>

void main(){
    int a,b,c,x,y,z;
    printf("Enter a:");
    scanf("%d",&a);
    
    printf("Enter b:");
    scanf("%d",&b);

    printf("Enter c:");
    scanf("%d",&c);

    if(a>b){
        if(a>c){
            if(b>c){
                x=a;y=b;z=c;
            }
            else{
                x=a;y=c;z=b;
            }
        }
        else{
            x=c;y=a;z=b;
        }
    }
    else{
        if(b>c){
            if(a>c){
                x=b;y=a;z=c;   
            }
            else{
                x=b;y=c;z=a;
            }
        }
        else{
            x=c;y=b;z=a;
        }
    }
    printf("Ascending Order is: %d,%d,%d\n",z,y,x);
    printf("Descending Order is: %d,%d,%d\n",x,y,z);
    
}
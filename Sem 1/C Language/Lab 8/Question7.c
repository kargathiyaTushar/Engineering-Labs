// Question 7:Count frequency of digits in an integer. 

#include <stdio.h>

void main(){
    int n,n1,c0,c1,c2,c3,c4,c5,c6,c7,c8,c9;
    c0=c1=c2=c3=c4=c5=c6=c7=c8=c9=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(n1=n;n1>0;n1/=10){
        if(n1%10==0){
            c0++;
        }
        else if(n1%10==1){
            c1++;
        }
        else if(n1%10==2){
            c2++;
        }
        else if(n1%10==3){
            c3++;
        }
        else if(n1%10==4){
            c4++;
        }
        else if(n1%10==5){
            c5++;
        }
        else if(n1%10==6){
            c6++;
        }
        else if(n1%10==7){
            c7++;
        }
        else if(n1%10==8){
            c8++;
        }
        else if(n1%10==9){
            c9++;
        }
    }
    printf("The frequency of digits are:\n 0: %d \n 1: %d \n 2: %d \n 3: %d \n 4: %d \n5: %d \n 6: %d \n 7: %d \n8: %d \n 9: %d\n",c0,c1,c2,c3,c4,c5,c6,c7,c8,c9);
}
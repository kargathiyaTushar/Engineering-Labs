#include <stdio.h>

void main(){
    int students[12],fees[12],total=0,i;
    for(i=0;i<12;i++){
        printf("Enter the fees for standard %d",i+1);
        scanf("%d",&fees[i]);
    }
    for(i=0;i<12;i++){
        printf("Enter the number of students in standard %d",i+1);
        scanf("%d",&students[i]);
    }
    for(i=0;i<12;i++){
        total+=(fees[i]/12.0)*students[i];
    }
    printf("Total Monthly Income of Tushar is: %d",total);
}
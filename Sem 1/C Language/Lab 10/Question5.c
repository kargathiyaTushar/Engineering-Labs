#include <stdio.h>

/* Question 5:Print the pattern: 
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
void main(){
    int i,j,n=5,a=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=(2*i-1);j++){
            if(j%2==0){
                printf(" ");
            }
            else{
                printf("%d",a++);
            }
        }
        printf("\n");
    }
}
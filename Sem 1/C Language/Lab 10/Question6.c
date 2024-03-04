#include <stdio.h>

/* Question 6:Print the pattern 
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
void main(){
    int i,j,n=5,a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*i-1);j++){
            if(j%2==0){
                printf(" ");
            }
            else{
                printf("%d",a);
                a=!a;
            }
        }
        printf("\n");
    }
}
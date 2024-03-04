#include <stdio.h>

/* Question 4: Print the pattern:
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
void main(){
    int i,j,n=5,a;
    for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j%2==1){
                printf("%d",a++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
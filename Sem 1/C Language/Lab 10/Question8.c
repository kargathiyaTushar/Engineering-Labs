#include <stdio.h>

/* Question 8: Print the pattern
    1
   A B
  1 2 3
 C D E F
1 2 3 4 5
*/
void main(){
    int i,j,n=5,a=1;
    char c='A';
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++){
            if(j%2==0){
                printf(" ");
            }
            else{
                if(i%2==0){
                    printf("%c",c++);
                }
                else{
                    printf("%d",a++);
                }
            }
        }
        a=1;
        printf("\n");
    }
}
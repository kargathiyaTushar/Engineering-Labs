#include <stdio.h>

void main(){
    // int i,j;
    // for(i=5;i>=1;i--){
    //     for(j=5;j>=i;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    /*Pattern:
        *
       **
      ***
     ****
    *****
     */
    // for(i=1;i<=5;i++){
    //     for(j=5;j>i;j--){
    //         printf(" ");
    //     }
    //     for(j=1;j<=i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    //Pattern:
    /*
    1
    01
    101
    0101
    10101
    */

    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){
    //         if((i+j)%2==0){
    //             printf("1");
    //         }
    //         else{
    //             printf("0");
    //         }
    //     }
    //     printf("\n");
    // }

    //Pattern:
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    /*
        int i,j,n=5;
    for(i=5;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }*/

/*
    Pattern:
        *
       * *
      *   *
     *     *
    *********
    int main(){
    int i,j,n=5;

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1 || j==2*i-1 || i==n){
                printf("*");
            } 
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
*/
}
// Question 9:Print the upper triangular matrix 

#include <stdio.h>

void main(){
    int n,i,j;
    printf("Enter the dimensions of the square matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter a value into matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j>=i){
                printf("%d ",matrix[i][j]);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}
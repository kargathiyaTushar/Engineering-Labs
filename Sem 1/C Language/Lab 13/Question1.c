// Question 1:Read values in two dimensional array and print them in matrix form 

#include <stdio.h>

void main(){
    int m,n,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);
    int A[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter value into A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
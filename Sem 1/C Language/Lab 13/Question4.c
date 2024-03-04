//Question 4:Perform addition of two matrices.

#include <stdio.h>

void main(){
    int m,n,i,j;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of column:");
    scanf("%d",&n);
    int A[m][n],B[m][n],C[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the value into A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the value into B[%d][%d]",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            C[i][j]=A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}
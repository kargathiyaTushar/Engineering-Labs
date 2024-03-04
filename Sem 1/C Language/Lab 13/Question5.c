// Question 5:Print Transpose of a matrix 

#include <stdio.h>

void main(){
    int m,n,i,j;
    printf("Enter the number of Rows and Columns of the Square Matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter value into Matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("A=\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<1;i++){
        for(j=0;j<n;j++){
            m=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=m;
        }
    }
    printf("A'=\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
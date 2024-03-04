// Question 6:Print Multiplication of two matrices 

#include <stdio.h>

void main(){
    int x,y,m,n,i,j,t,s=0;
    printf("Enter the number of Rows of Matrix A:");
    scanf("%d",&x);
    printf("Enter the number of Columns of Matrix A:");
    scanf("%d",&y);
    printf("Enter the number of Rows of Matrix B:");
    scanf("%d",&m);
    printf("Enter the number of Columns of Matrix B:");
    scanf("%d",&n);
    int A[x][y], B[m][n],C[x][n];
    if(y==m){
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                printf("Enter value into A[%d][%d]:",i,j);
                scanf("%d",&A[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Enter value into B[%d][%d]:",i,j);
                scanf("%d",&B[i][j]);
            }
            printf("\n");
        }
        printf("A=\n");
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
        printf("B=\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d ",B[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<x;i++){
            for(j=0;j<m;j++){
                for(t=0;t<y;t++){
                    s+=(A[i][t]*B[t][j]);
                    printf("i= %d j= %d t= %d\n",i,j,t);
                }
                C[i][j]=s;
                s=0;
            }
        }
        printf("\nMultiplication of A and B is:\n");
        for(i=0;i<x;i++){
            for(j=0;j<n;j++){
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nThe Matrix can't be multiplied since the number of column of matrix A is not equal to number of row of matrix B\n");
    }
}
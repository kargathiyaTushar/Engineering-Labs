// Question 7: Add two matrix using pointers

#include <stdio.h>

void main(){
    int m,n,i,j;
    printf("Enter the number of Rows:");
    scanf("%d",&m);
    printf("Enter the number of Columns:");
    scanf("%d",&n);
    int A[m][n], B[m][n], C[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a value into A[%d][%d]: ",i,j);
            scanf("%d",(*(A+i)+j));
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a value into B[%d][%d]: ",i,j);
            scanf("%d",(*(B+i)+j));
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            *(*(C+i)+j)= *(*(A+i)+j) + *(*(B+i)+j);
            printf("%d ",*(*(C+i)+j));
        }
        printf("\n");
    }
}
// Question 7:Read a matrix and print diagonal elements and its sum 

#include <stdio.h>

void main(){
    int n,i,j,sum=0;
    printf("Enter the number of Rows and Column of the square matrix:");
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter value into matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Diagonal Elements are: ");
    for(i=0;i<n;i++){
        printf("%d ",matrix[i][i]);
        sum+=matrix[i][i];
    }
    printf("\nSum of the Diagonal Elements is: %d\n",sum);
}
// Question 3:Read and store the roll number and marks of 20 students using 2D array 

#include <stdio.h>

void main(){
    int i,j,m=2,n=2;
    int marks[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            printf("Enter the Roll Number of Student %d:",i+1);
            scanf("%d",&marks[i][j]);
            printf("Enter the Marks of Student %d:",i+1);
            scanf("%d",&marks[i][j+1]);
        }
    }
    printf("Roll Number Marks\n");
    for(i=0;i<m;i++){
        for(j=0;j<n-1;j++){
            printf("    %d",marks[i][j]);
            printf("      %d",marks[i][j+1]);
        }
        printf("\n");
    }
}
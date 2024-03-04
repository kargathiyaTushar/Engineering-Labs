// Question 2:Count number of positive, negative and zero elements from 3X3 matrix 

#include <stdio.h>

void main(){
    int m,n,i,j,pos=0,neg=0,zero=0;
    printf("Enter the number of Rows:");
    scanf("%d",&m);
    printf("Enter the number of Columns:");
    scanf("%d",&n);
    int A[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter a value into  A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
            if(A[i][j]>0){
                pos++;
            }
            else if(A[i][j]<0){
                neg++;
            }
            else{
                zero++;
            }
        }
    }
    printf("Number of Positive elements: %d\nNumber of Negative elements: %d\nNumber of Zeros: %d\n",pos,neg,zero);
}
// Question 9:Sort array using pointers 

#include <stdio.h>

void main(){
    int i,j,n,*ptr;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array[%d]: ",i);
        scanf("%d",(array+i));
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if((*(array+j))>(*(array+j+1))){
                *(array+j)=*(array+j) + *(array+j+1);
                *(array+j+1)=*(array+j) - *(array+j+1);
                *(array+j)=*(array+j) - *(array+j+1);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d,",*(array+i));
    }
    printf("\b.\n");
}
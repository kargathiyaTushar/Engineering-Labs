#include <stdio.h>

void main(){
    int *ptr;
    int n,i,sum=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    ptr=(int *)calloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Enter a value: ");
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("%d",sum);
}
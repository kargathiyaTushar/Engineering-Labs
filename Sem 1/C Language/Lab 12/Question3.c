// Question 3: Count number of elements divisible by 3 in an array

#include <stdio.h>

void main(){
    int i,n,count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into array a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]%3==0){
            count++;
        }
    }
    printf("The number of elements divisible by 3 in array a is: %d\n",count);
}
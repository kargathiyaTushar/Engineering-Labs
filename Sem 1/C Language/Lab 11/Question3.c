// Question 3:Count number of even or odd number from an array of n numbers 

#include <stdio.h>

void main(){
    int n,i,odd=0,even=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the array element array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("\nNumber of even numbers is: %d\nNumber of odd numbers is: %d\n",even,odd);
}
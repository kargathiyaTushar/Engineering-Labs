#include <stdio.h>
#include <math.h>

// Question 7:Calculate the average, geometric and harmonic mean of n elements in an array 

void main(){
    int n,i;
    float avg,sum=0,gmean=1,hmean,reciprocalsum=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    float n1=n;
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the array element array[%d]:",i);
        scanf("%d",&array[i]);
        sum+=array[i];
        gmean*=pow(array[i],(1/n1));
        reciprocalsum+=(1.0/array[i]);
    }
    hmean=n1/reciprocalsum;
    avg=sum/n;
    printf("Average= %f\nGeometric Mean= %f\nHarmonic Mean= %f\n",avg,gmean,hmean);
}
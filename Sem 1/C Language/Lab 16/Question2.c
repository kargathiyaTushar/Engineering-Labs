// Question 2: Pass an array in function to print array elements.

#include <stdio.h>

void arrprint(int n, int *a);
void main(){
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter a value into a[%d]:",i);
		scanf("%d",&a[i]);
	}
	arrprint(n,a);
}
void arrprint(int n, int *a){
	int i;
	for(i=0;i<n;i++){
		printf("%d,",*(a+i));
	}
	printf("\b.");
}
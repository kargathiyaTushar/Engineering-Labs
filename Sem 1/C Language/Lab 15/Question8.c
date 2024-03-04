// Question 8: Find all prime numbers between given interval using functions.

#include <stdio.h>

void prime(int,int);
void main(){
	int m,n;
	printf("Enter the first number: ");
	scanf("%d",&m);
	printf("Enter the second number: ");
	scanf("%d",&n);
	prime(m,n);
	printf("\b.");
}

void prime(int m, int n){
	int i,j,status=0;
	for(i=m;i<n;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				status=1;
				break;
			}
		}
		if(status==0){
			printf("%d,",i);
		}
		status=0;
	}
}

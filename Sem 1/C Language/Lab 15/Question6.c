// Question 6: Generate Fibonacci series of N given number using function name fibbo().

#include <stdio.h>

int fibbo(int n);
void main(){
	int n;
	printf("Enter the number of terms you want in the fibbonacci sequence: ");
	scanf("%d",&n);
	fibbo(n);
}

int fibbo(n){
	int a=0,b=0,c,i;
	for(i=1;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d,",c);
		if(a==0 && b==0){
			b++;
		}
	}
	printf("\b.\n");
}

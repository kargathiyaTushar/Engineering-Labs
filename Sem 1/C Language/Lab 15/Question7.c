// Question 7: Check whether a number is prime, Armstrong or perfect number 
// using functions.

#include <stdio.h>

int num(int, int);

void main(){
	int a,ch;
	printf("Enter the number: ");
	scanf("%d",&a);
	printf("Enter 1 to check if number is Prime or not.\n");
	printf("Enter 2 to check if number is Armstrong or not.\n");
	printf("Enter 3 to check if number is Perfect number or not.\n");
	printf("Enter your choice: ");
	scanf("%d",&ch);
	int ans=num(a,ch);
	if(ch==1){
		if(ans==1){
			printf("The given number is Prime Number.");
		}
		else{
			printf("The given number is not a Prime Number.");
		}
	}
	else if(ch==2){
		if(ans==1){
			printf("The given number is an Armstrong Number.");
		}
		else{
			printf("The given number is not an Armstrong Number.");
		}
	}
	else if(ch==3){
		if(ans==1){
			printf("The given number is a Perfect Number.");
		}
		else{
			printf("The given number is not a Perfect Number.");
		}
	}
}

int num(int a, int ch){
	if(ch==1){
		int i,status=0;
		for(i=2;i<=a/2;i++){
			if(a%i==0){
				status=1;
				break;
			}
		}
		if(status==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	else if(ch==2){
		int a1,d=0,n=0,i,x=1;
		a1=a;
		for(a1;a1!=0;a1/=10){
			d++;
		}
		a1=a;
		for(a1;a1!=0;a1/=10){
			x=1;
			for(i=1;i<=d;i++){
				x*=(a1%10);
			}
			n+=x;
		}
		if(n==a){
			return 1;
		}
		else{
			return 0;
		}
	}
	else if(ch==3){
		int s=0,i;
		for(i=1;i<a;i++){
			if(a%i==0){
				s+=i;
			}
		}
		if(s==a){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		printf("Invalid Choice.");
	}
}

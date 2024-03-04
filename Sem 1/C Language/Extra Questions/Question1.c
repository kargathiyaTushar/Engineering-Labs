#include <stdio.h>

// Question 1: Write a program to check if the entered year is leap year or not
void main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0){
        printf("The year is a leap year\n");
    }
    else if (year%400==0){
        printf("The year is a leap year\n");
    }
    else{
        printf("The year is not a leap year\n");
    }
}
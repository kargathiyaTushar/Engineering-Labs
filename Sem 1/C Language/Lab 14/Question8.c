// Question 8:Find length of string using pointers 

#include <stdio.h>

void main(){
    int i;
    char a[100], *ptr;
    ptr=a;
    printf("Enter the string:");
    gets(a);
    for(i=0;*(a+i)!='\0';i++){}
    printf("Length of the entered string is: %d\n",i);
}
// Question 3: Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()

#include <stdio.h>
#include <string.h>

void main(){
    char a[100],b[100],c[100];
    printf("Enter string 1: ");
    gets(a);
    printf("Enter string 2: ");
    gets(b);
    printf("The length of string 1 is: %d\n",strlen(a));
    printf("The length of string 2 is: %d\n\n",strlen(b));
    if(strcmp(a,b)==0){
        printf("Both the strings are same.\n\n");
    }
    else{
        printf("Both the strings are not same.\n\n");
    }
    strcpy(c,a);
    printf("Copy of string 1 is: %s\n\n",c);
    strcat(a,b);
    printf("Concatination of string 1 and 2 is: %s\n\n",a);
    printf("Reverse of string 1 is: %s\n\n",strrev(a));
    printf("Lower case of string 1 is: %s\n\n",strlwr(a));
    printf("Upper case of string 1 is: %s\n",strupr(a));
}
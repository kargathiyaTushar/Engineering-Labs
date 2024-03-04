// Question 5:Input a string in a character array and print string and length of string.

#include <stdio.h>

void main(){
    int i,len=0;
    char a[100];
    printf("Enter the string:");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        len++;
    }
    printf("The string is: %s \nAnd the length of the string is:%d\n",a,len);
}
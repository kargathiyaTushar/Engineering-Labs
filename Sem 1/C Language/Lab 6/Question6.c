#include <stdio.h>

// Question 6: Print all uppercase and lowercase alphabets.

void main(){
    char a='A',b='a';
    printf("Uppercase Alphabets: ");
    while(a<='Z'){
        printf("%c,",a++);
    }
    printf("\b. \nLowercase Alphabets: ");

    while(b<='z'){
        printf("%c,",b++);
    }
    printf("\b. \n");
}
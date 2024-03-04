// Question 7: Check whether character is an alphabet or not using conditional operator

#include <stdio.h>

void main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    (ch>='a'&&ch<='z')?printf("The entered character is an alphabet\n"):(ch>='A'&&ch<='Z')?printf("The entered character is an alphabet\n"):printf("The entered character is not an alphabet\n");
    
}
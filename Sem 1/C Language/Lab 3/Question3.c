// Question 3: Check whether the entered character is upper case, lower case,
// digit or any special character.

#include <stdio.h>

void main(){
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        printf("The entered character is Lower Case\n");
    }
    else if (c>='A' && c<='Z'){
        printf("The entered character is Upper Case\n");
    }
    else if (c>=48 && c<=57){
        printf("The entered character is a Digit\n");
    }
    else{
        printf("The entered character is a Special Symbol\n");
    }
    
}
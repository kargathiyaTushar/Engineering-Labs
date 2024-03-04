// Question 6: Check whether given character is vowel or consonant.

#include <stdio.h>

void main(){
    char a;
    printf("Enter the character: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("The character is a vowel\n");
    }
    else{
        printf("The character is a consonant\n");
    }
}
// Question 4:Find a character from given string 

#include <stdio.h>
#include <string.h>

void main(){
    char a[100],c;
    printf("Enter the string: ");
    gets(a);
    printf("Enter the character you want to find: ");
    scanf(" %c",&c);
    int i,len=0;
    for(i=0;a[i]!='\0';i++){
        len++;
    }
    for(i=0;a[i]!='\0';i++){
        if(a[i]==c){
            break;
        }
    }
    if(i<len){
        printf("The character %c is at index: %d.",c,i);
    }
    else{
        printf("The character %c doesn't exist in the string.",c);
    }
}
// Question 5:Replace a character in given string 

#include <stdio.h>

void main(){
    char a[100],c1,c2;
    int i;
    printf("Enter the string: ");
    gets(a);
    printf("Enter the string you want to replace: ");
    scanf(" %c",&c1);
    printf("Enter the string you want to replace with: ");
    scanf(" %c",&c2);
    for(i=0;a[i]!='\0';i++){
        if(a[i]==c1){
            a[i]=c2;
            break;
        }
    }
    printf("%s",a);
}
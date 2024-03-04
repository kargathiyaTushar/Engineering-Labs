#include <stdio.h>
#include <string.h>

void salting(char password[],char salt[]);

void main(){
    char password[100],salt[]="#4522";
    printf("Enter the password: ");
    scanf("%s",password);
    salting(password,salt);
}

void salting(char password[],char salt[]){
    char newpassword[200];
    strcpy(newpassword,password);
    strcat(newpassword,salt);
    printf("%s",newpassword);
}
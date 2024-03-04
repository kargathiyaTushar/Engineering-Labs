#include <stdio.h>

void main(){
    char s1[100],s2[100];
    int i;
    printf("Enter the string s1:");
    gets(s1);
    printf("Enter the string s2:");
    gets(s2);

    for(i=0;s1[i]!='\0' || s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("%s\n",s1);
}
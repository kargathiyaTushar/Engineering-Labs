#include <stdio.h>

void main(){
    char a[100],b[100];
    int i,j;
    printf("Enter string 1:");
    gets(a);
    printf("Enter string 2:");
    gets(b);
    for(i=0;a[i]!='\0';i++){}
    for(j=0;b[j]!='\0';j++){
        a[i++]=b[j];
    }
    a[i]='\0';
    printf("String a + b is: %s\n",a);
}
#include <stdio.h>

void main(){
    char a[100];
    printf("Enter the string:");
    gets(a);
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]+=32;
        }
    }
    printf("%s\n",a);
}
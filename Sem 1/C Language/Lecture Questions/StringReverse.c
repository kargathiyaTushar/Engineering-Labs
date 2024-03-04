#include <stdio.h> 
#include <string.h>

void main(){
    char a[100];
    printf("Enter the string 1:");
    gets(a);
    int length=strlen(a);
    int i,j=length-1;
    for(i=0;i<length/2;i++){
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    printf("%s\n",a);
}
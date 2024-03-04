#include <stdio.h>

void main(){
    char a[100];
    int i,spsymbol=0,digit=0,alphabet=0,ucase=0,lcase=0;
    printf("Enter the string:");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            ucase++;
        }
        else if(a[i]>='a' && a[i]<='z'){
            lcase++;
        }
        else if(a[i]>='1' && a[i]<='9'){
            digit++;
        }
        else{
            spsymbol++;
        }
    }
    printf("\nNumber of UpperCase Alphabets: %d\nNumber of LowerCase Alphabets: %d\nNumber of Digits: %d\nNumber of Special Symbols: %d\n",ucase,lcase,digit,spsymbol);

}
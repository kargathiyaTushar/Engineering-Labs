#include <stdio.h>

void main(){
    char a[100],b[100];
    int i=0,c=0,lena=0,lenb=0;
    printf("Enter the string 1:");
    gets(a);
    printf("Enter the string 2:");
    gets(b);
    for(i=0;a[i]!='\0';i++){
        lena++;
    }
    for(i=0;b[i]!='\0';i++){
        lenb++;
    }
    if(lena==lenb){
        for(i=0;a[i]!='\0' || b[i]!='\0';i++){
            if(a[i]!=b[i]){
                c=1;
                printf("Not Same.\n");
                break;
            }
        }
        if(c==0){
            printf("Same.\n");
        }
    }
    else{
        printf("Not Same.\n");
    }
}
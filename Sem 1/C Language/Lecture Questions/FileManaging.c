#include <stdio.h>

void main(){
    FILE *f;
    // 3 Modes to open text file:
    // Read Mode: "r"
    // Write Mode: "w"
    // Append Mode: "a"
    f=fopen("Text.txt","r");
    if(f==NULL){
        printf("File doesn't exist\n");
    }
    int a,sum=0;
    char arr[20];
    while(fscanf(f,"%d %s",&a,arr)==2){
        printf("%d %s \n",a,arr);
    }
}
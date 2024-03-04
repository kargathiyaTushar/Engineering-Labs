// Question 8: Get a number as string from user and convert string  to integer,
// string to float as per user's choice

#include <stdio.h>

void main(){
    int i;
    char c[100],ch;
    printf("Enter the string:");
    gets(c);
    printf("Enter 'i' to convert the string into integer.\n");
    printf("Enter 'f' to convert the string into float.\n");
    printf("Enter your choice:");
    scanf("%c",&ch);
    if(ch=='i'){
        int integer=0;
        for(i=0;c[i]!='\0';i++){
            if(c[i]=='1'){
                integer=integer*10 + 1;
            }
            else if(c[i]=='2'){
                integer=integer*10 + 2;
            }
            else if(c[i]=='3'){
                integer=integer*10 + 3;
            }
            else if(c[i]=='4'){
                integer=integer*10 + 4;
            }
            else if(c[i]=='5'){
                integer=integer*10 + 5;
            }
            else if(c[i]=='6'){
                integer=integer*10 + 6;
            }
            else if(c[i]=='7'){
                integer=integer*10 + 7;
            }
            else if(c[i]=='8'){
                integer=integer*10 + 8;
            }
            else if(c[i]=='9'){
                integer=integer*10 + 9;
            }
        }
        printf("%d\n",integer);
    }
    else if(ch=='f'){
        float f,d=10;
        for(i=0;c[i]!='\0';i++){
            if(c[i]=='1'){
            f=f*10 + 1;
            }
            else if(c[i]=='2'){
                f=f*10 + 2;
            }
            else if(c[i]=='3'){
                f=f*10 + 3;
            }
            else if(c[i]=='4'){
                f=f*10 + 4;
            }
            else if(c[i]=='5'){
                f=f*10 + 5;
            }
            else if(c[i]=='6'){
                f=f*10 + 6;
            }
            else if(c[i]=='7'){
                f=f*10 + 7;
            }
            else if(c[i]=='8'){
                f=f*10 + 8;
            }
            else if(c[i]=='9'){
                f=f*10 + 9;
            }
        }
        printf("%f",f);
    }
}
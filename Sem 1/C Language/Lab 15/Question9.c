//Question 9: Create a menu driven program to implement own string.h library.

#include <stdio.h>
#include "String.h"

void main(){
    int ch=-1;
    while(ch!=0){
        printf("Enter 0 to exit the menu.\n");
        printf("Enter 1 to find string length.\n");
        printf("Enter 2 to compare two strings.\n");
        printf("Enter 3 to append a string into another.\n");
        printf("Enter 4 to copy a string into another.\n");
        printf("Enter 5 to find the first occurence of a part of string in a string.\n");
        printf("Enter 6 to compare first n characters of a string.\n");
        printf("Enter 7 to find the first occurence of a character in a string.\n");
        printf("Enter 8 to append first n characters of a string to another.\n");
        printf("Enter 9 to copy first n characters of a string.\n");
        printf("Enter 10 to convert all characters of a string to lowercase.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        if(ch==1){
            char a[100];
            printf("Enter the string to find its length: ");
            gets(a);
            printf("%d",strlength(a));
        }
        else if(ch==2){
            char a[100],b[100];
            printf("Enter the first string: ");
            gets(a);
            printf("Enter the second string: ");
            gets(b);
            int ans=strcompare(*a,*b);
            if(ans==1){
                printf("Both the strings are same.\n");
            }
            else{
                printf("Both the strings are not same.\n");
            }
        }
        else if(ch==3){
            char a[100],b[100];
            printf("Enter the first string: ");
            gets(a);
            printf("Enter the second string: ");
            gets(b);
            printf("%s",strconcat(a[100],b[100]));
        }
        else if(ch==4){
            char a[100],b[100];
            printf("Enter the first string: ");
            gets(a);
            strcopy(a[100], *b);
            printf("%s",b[100]);
        }
        else if(ch==5){
            char a[100],b[100];
            printf("Enter the first string: ");
            gets(a);
            printf("Enter the string you want to find: ");
            gets(b);
            printf("%d",stringstr(a,b));
        }
        else if(ch==6){
            char a[100],b[100];
            int n;
            printf("Enter the first string: ");
            gets(a);
            printf("Enter the second string: ");
            gets(b);
            printf("Enter the number of characters you want to compare:");
            scanf("%d",&n);
            int ans=strncompare(a,b,n);
            if(ans==1){
                printf("The first %d characters of both string are same.\n",n);
            }
            else{
                printf("The first %d characters of both strings are not same.\n");
            }
        }
        else if(ch==7){
            char a[100],b;
            printf("Enter the string: ");
            gets(a);
            printf("Enter the character you want to find:");
            scanf("%c",&b);
            int ans=strchar(a[100],b);
            if(ans!=0){
                printf("%d",ans);
            }
            else{
                printf("The character you enetred does not exist in the string.\n");
            }
        }
        else if(ch==8){
            char a[100],b[100];
            int n;
            printf("Enter the first string: ");
            gets(a);
            printf("Enter the second string: ");
            gets(b);
            printf("Enter the number of characters you want to append into first string:");
            scanf("%s",&n);
            printf("%s",strnconcat(a[100],b[100],n));
        }
        else if(ch==9){
            char a[100],b[100];
            int n;
            printf("Enter the first string: ");
            gets(a);
            printf("Enter the number of characters you want to copy: ");
            scanf("%d",&n);
            strncopy(a[100],*b,n);
            printf("%s",b[100]);
        }
        else if(ch==10){
            char a[100];
            printf("Enter the string: ");
            gets(a);
            printf("%s",strlower(a[100]));
        }
    }
}
#include <stdio.h>

void main(){
    int n,i;
    char a[100],b[100];
    printf("Enter the first string:");
    gets(a);
    printf("Enter the number of character you want to copy:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s\n",b);
}
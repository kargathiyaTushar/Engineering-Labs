#include <stdio.h>

int strlength(char *a){
    int i;
    for(i=0;*(a+i)!='\0';i++){}
    return i;
}

int strcompare(char *a, char *b){
    int i,c=0;
    if(strlength(*a)==strlength(*b)){
        for(i=0;*(a+i)!='\0';i++){
            if(*(a+i)!=*(b+i)){
                c=1;
                return 0;
                break;
            }
        }
        if(c==0){
            return 1;
        }
    }
    else{
        return 0;
    }
}

int strconcat(char *a, char *b){
    int i,j;
    i=strlength(*a)-1;
    for(j=0;*(b+j)!='\0';j++){
        *(a+i)=*(b+j);
        i++;
    }
    *(a+i)='\0';
    return *a;
}

void strcpy(char *a, char *b){
    int i;
    for(i=0;*(a+i)!='\0',i++;){
        *(b+i)=*(a+i);
    }
}

int stringstr(char *a, char *b){
    int i,c=0, *ptr=&a;
    for(i=0;a[i]!='\0';i++){
        if(*(a+i)==*(b+i)){
            c++;
            ptr=a;
        }
        else{
            i-=c;
        }
    }
    if(c==strlength(*b)){
        return (ptr-c);
    }
}

int strncompare(char *a, char *b, int n){
    int i,c=0;
    for(i=0;i<n;i++){
        if(*(a+i)!=*(b+i)){
            c=1;
            return 0;
            break;
        }
    }
    if(c==0){
        return 1;
    }
}

int strchar(char *a, char b){
    int i,c=0;
    for(i=0;*(a+i)!='\0';i++){
        if(*(a+i)==b){
            return a+i;
        }
        else{
            c=1;
        }
    }
    if(c==1){
        return 0;
    }
}

char strnconcat(char *a, char *b, int n){
    int i,j;
    i=strlength(*a);
    for(j=0;j<n;j++){
        *(a+i)=*(b+j);
    }
    *(a+i)='\0';
    return *a;
}

void strncopy(char *a, char *b, int n){
    int i;
    for(i=0;i<n;i++){
        *(b+i)=*(a+i);
    }
}

char strlower(char *a){
    int i;
    for(i=0;a[i]!='\0';i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]+=33;
        }
    }
    return a[100];
}
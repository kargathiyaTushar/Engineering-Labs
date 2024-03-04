#include <stdio.h>
#include <string.h>

struct Book{
    float price;
    int page_no;
    char name[100];
};

void main(){
    struct Book B1;
    strcpy(B1.name,"Quantum Physics");
    B1.price=500.25;
    B1.page_no=199;
}
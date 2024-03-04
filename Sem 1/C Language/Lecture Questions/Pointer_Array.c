#include <stdio.h>

void main(){
    // int a[5]={1,2,3,4,5}, *ptr,i;
    // ptr=a;
    // for(i=0;i<5;i++){
    //     printf("%d\n",*(ptr+i));
    // }
    // char b[10]="Hello",*ptr1;
    // ptr1=b;
    // printf("%s\n",ptr);  // Hello
    // printf("%c\n",*ptr1); // H
    // printf("%c\n",*ptr1+1); // I
    // printf("%c\n",*(ptr+1)); // e
    char city[3][25]={"Baroda","Rajkot","Morbi"};
    printf("%c\n",**(city+1)+2); // *(city+1)= city[1] *(city[1])='R'
    printf("%c\n",*(*(city+2)+2)+3);
    int a[4][5]={{1,2,3,4,5},
                 {6,7,8,9,10},
                 {11,12,13,14,15},
                 {16,17,18,19,20}};

    printf("%d\n",*(*(a+**a+1)+2)); // 13
    // In 2D array *a= 1st Row and **a= 1st Row 1st Element
    printf("%d\n",*(*(a+*(*a+1)+2))); // Garbage Value.
    printf("%d\n",*(*(a+*(*a)+2))); // 16
}
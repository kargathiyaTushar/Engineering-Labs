// Question 2:Create a structure book with book title, author, publication, 
// and price. Read data of 3 books and display. 

#include <stdio.h>

struct Book{
    char Title[30],Author[30],Publication[30];
    float Price;
};

void main(){
    struct Book B[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter the title of the book: ");
        scanf("%s",&B[i].Title);
        printf("Enter the name of the author of the book: ");
        scanf("%s",&B[i].Author);
        printf("Enter the name of the publication of the book: ");
        scanf("%s",&B[i].Publication);
        printf("Enter the price of the book: ");
        scanf("%f",&B[i].Price);
        printf("\n");
    }
    for(i=0;i<3;i++){
        printf("Title of the book is: %s \n",B[i].Title);
        printf("Name of the Author of the book is: %s \n",B[i].Author);
        printf("Name of the Publication of the book is: %s \n",B[i].Publication);
        printf("Price of the book is: %f \n\n",B[i].Price);
    }
}
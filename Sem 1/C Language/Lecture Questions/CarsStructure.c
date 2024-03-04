#include <stdio.h>

struct Cars{
    char Name[50];
    float Milage;
    int Price;
};

void main(){
    int i;
    struct Cars C[6];
    for(i=0;i<6,i++;){
        printf("Enter the Car's Name: ");
        gets(C[i].Name);
        printf("Enter the Car's Milage: ");
        scanf("%f",&C[i].Milage);
        printf("Enter the Car's Price: ");
        scanf("%d",&C[i].Price);
    }
    for(i=0;i<6;i++){
        if(C[i].Price>500000){
            printf("The Name of the car is: %s \n",C[i].Name);
            printf("The Milage of the car is: %f \n",C[i].Milage);
            printf("The Price of the car is: %d \n\n",C[i].Price);
        }
    }
}
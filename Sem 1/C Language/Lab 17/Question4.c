// Question 4:Create structure student with name, percentage and age.
// Read data of 5 students using array of structure. 

#include <stdio.h>

struct Student{
    char Name[30];
    float Percentage;
    int Age;
};

void main(){
    struct Student S[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the name of student %d: ",i+1);
        scanf("%s",&S[i].Name);
        printf("Enter the percentage of student %d: ",i+1);
        scanf("%f",&S[i].Percentage);
        printf("Enter the age of student %d: ",i+1);
        scanf("%d",&S[i].Age);
        printf("\n");
    }
    for(i=0;i<5;i++){
        printf("The name of student is: %s\n",S[i].Name);
        printf("The percentage of student is: %f\n",S[i].Percentage);
        printf("The age of student is: %d\n\n",S[i].Age);
    }
}
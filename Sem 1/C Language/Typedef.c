#include <stdio.h>

typedef struct Student{
    char Name[100];
    int RollNo;
    float CGP;
}std;

void main(){
    std s;
    printf("Enter the name of student: ");
    gets(s.Name);
    printf("Enter the Roll number of student: ");
    scanf("%d",&s.RollNo);
    printf("Enter the CGP of student: ");
    scanf("%f",&s.CGP);
    printf("\n");
    printf("The Name of student is: %s\n",s.Name);
    printf("The Roll number of student is: %d\n",s.RollNo);
    printf("The CGP of student is: %f\n",s.CGP);
}
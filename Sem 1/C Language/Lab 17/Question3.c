// Question 3:Demonstrate difference between structure and union. 

#include <stdio.h>
struct Employee{
    float Salary;
    char Name[30], Department[30];
};
union Person{
    char Name[30],Department[30];
    float Salary;
};

void main(){
    struct Employee E;
    union Person P;
    printf("The size of Employee structure is: %d.\n",sizeof(E));
    printf("The size of Person union is: %d.\n",sizeof(P));
}
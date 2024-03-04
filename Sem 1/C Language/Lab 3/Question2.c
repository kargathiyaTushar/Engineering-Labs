/* Question 2: Enter basic salary of an employee and calculate Gross Salary 
   according to the given conditions:
   Basic Salary: >=10000 : HRA = 20% of basic, DA = 80% of Basic
   Basic Salary: >=20000 : HRA = 25% of basic, DA = 90% of Basic
   Basic Salary: >=30000 : HRA = 30% of basic, DA = 95% of Basic
*/

#include <stdio.h>

void main(){
    float salary,gross_salary;
    printf("Enter your Base Salary:");
    scanf("%f",&salary);
    
    if(salary>=30000){
        gross_salary=salary+(salary*0.3)+(salary*0.95);
    }
    else if (salary>=20000){
        gross_salary=salary+(salary*0.25)+(salary*0.9);
    }
    else if (salary>=10000){
        gross_salary=salary+(salary*0.2)+(salary*0.8);
    }
    printf("Your Gross Salary is: %f\n",gross_salary);   
}
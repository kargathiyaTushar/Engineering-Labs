/* Question 6: Input electricity unit charge and calculate the total electricity bill
   according to the given condition:
   For first 50 units: Rs 0.50/unit
   For next 100 units: Rs 0.75/unit
   For next 100 units: Rs 1.20/unit
   For unit above 250: Rs 1.50/unit
   Add additional surcharge of 20% is added to the bill
*/

#include <stdio.h>

void main(){
    int unit;
    float bill;
    printf("Enter the units:");
    scanf("%d",&unit);
    if (unit>250){
        bill=(0.5*50)+(0.75*100)+(1.2*100)+(1.5*(unit-250));
    }
    else if (unit>150 && unit<=250){
        bill=(0.5*50)+(0.75*100)+(1.2*(unit-150));
    }
    else if(unit>50 && unit<=150){
        bill=(0.5*50)+(0.75*(unit-50));
    }
    else if(unit>=0 && unit<=50){
        bill=unit*0.5;
    }
    bill+=bill*0.2;
    printf("Yout Bill is: %f\n",bill);
}
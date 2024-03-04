/* Question 5: Read marks of five subjects. Calculate percentage and print 
   class accordingly. Fail below 35, Pass Class between 36 to 45, Second Class
   between 46 to 60, First Class between 61 to 70, Distinction if more than 70.
*/ 

#include <stdio.h>

void main(){
    float chemistry,physics,maths,english,computer,percentage;
    printf("Enter Marks of Chemistry:");
    scanf("%f",&chemistry);
    printf("Enter Marks of Physics:");
    scanf("%f",&physics);
    printf("Enter Marks of Maths:");
    scanf("%f",&maths);
    printf("Enter Marks of English:");
    scanf("%f",&english);
    printf("Enter Marks of Computer:");
    scanf("%f",&computer);
    percentage=(chemistry+physics+maths+english+computer)/5;
    
    if(percentage<35){
        printf("Your percentage is: %f and you have Failed\n",percentage);
    }
    else if (percentage>=35 && percentage<=45){
        printf("Your percentage is: %f and you are in Pass Class\n",percentage);
    }
    else if (percentage>45 && percentage<=60){
        printf("Your percentage is: %f and you are in Second Class\n",percentage);
    }
    else if (percentage>60 && percentage<=70){
        printf("Your percentage is: %f and you are in First Class\n",percentage);
    }
    else if (percentage>70){
        printf("Your percentage is: %f and you are Distinctive\n",percentage);
    }
}
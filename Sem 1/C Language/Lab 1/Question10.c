// Question 10: Convert Number of days into Year, Week and Days

#include <stdio.h>

void main(){
    int year,week,day;
    printf("Enter the number of days:");
    scanf("%d",&day);
    int days=day;
    year= day/365;
    day-=(year*365);
    week= day/7;
    day-=(week*7);
    printf("%d Days is %d year, %d week, %d day\n",days,year,week,day);
}
// Question 9: Convert seconds into hours, minutes and seconds 
// and print in HH:MM:SS

#include <stdio.h>

void main(){
    int hour,minute,second;
    printf("Enter the number of seconds:");
    scanf("%d",&second);

        hour=second/3600;
        second=second-(hour*3600);
        minute=second/60;
        second=second-(minute*60);
    printf("Time is %d:%d:%d\n",hour,minute,second);
}
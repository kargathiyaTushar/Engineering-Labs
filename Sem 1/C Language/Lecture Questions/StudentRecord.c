#include <stdio.h>
#include <string.h>

struct Student_Record{
    char Name[50],Branch[10];
    int Tmarks;
};

void main(){
    struct Student_Record S[10];
    int i;
    char a[50];
    for(i=0;i<10;i++){
        printf("Enter the Name of student %d: ",i+1);
        gets(a);
        scanf("%s",&S[i].Name);
        printf("Enter the Branch of student %d: ",i+1);
        scanf("%s",&S[i].Branch);
        printf("Enter the Total Marks of student %d: ",i+1);
        scanf("%d",&S[i].Tmarks);
    }
    for(i=0;i<10;i++){
        printf("Name of student is: %c \n",S[i].Name);
        printf("Branch of student is: %c \n",S[i].Branch);
        printf("Total Marks of student: %d \n\n",S[i].Tmarks);
    }
}
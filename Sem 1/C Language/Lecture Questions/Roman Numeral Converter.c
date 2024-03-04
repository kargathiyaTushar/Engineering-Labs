#include <stdio.h>
#include <string.h>

void main(){
    char a[100];
    printf("Enter the Roman Number:");
    scanf("%s",&a);
    int n=strlen(a);
    int b[n];
   for(int i=0;i<n;i++){
        if(a[i]=='I'){
            b[i]=1;
        }
        else if(a[i]=='V'){
            b[i]=5;
        }
        else if (a[i]=='X'){
            b[i]=10;
        }
        else if (a[i]=='L'){
            b[i]=50;
        }
        else if (a[i]=='C'){
            b[i]=100;
        }
        else if (a[i]=='D'){
            b[i]=500;
        }
        else if (a[i]=='M'){
            b[i]=1000;
        }
        // else{
        //     b[i]=0;
        // }
        
    }
    b[n]=0;
    printf("%s\n",a);
    // for(int i=0;i<=n;i++){
    //     printf("%d \n",b[i]);
    // }
    int ans=0;
    for(int i=0;i<=(n);i++){
        int x=b[i],y=b[i+1];
        if(y>x){
            ans=ans-x;
        }
        else if(x>=y){
            ans=ans+x;
        }
    }
    printf("%d\n",ans);
}
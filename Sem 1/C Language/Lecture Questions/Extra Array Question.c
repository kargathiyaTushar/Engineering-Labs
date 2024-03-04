// Take input of an array from user and print "Yes" if the values are in Ascending order
// and each elements repeats at least three times
// A=[1,1,1,2,2,2] Output: Yes
// A=[1,1,1,2,2] Output: No
// A=[1,1,1,2,2,3] Output: No
// A=[2,2,2,1,1,1] Output: No

#include <stdio.h>

void main(){
    int n,i,t,c=0,status=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter a value into a[%d]:",i);
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++){
        if(t>a[i]){
        status=1;
        }
        if(t==a[i]){
            c++;
        }
        else{
            if(c>=3){
                c=0,t=a[i],i--;
            }
            else{
                c=0; break;
            }
        }
    }

    if(c>=3 && status==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
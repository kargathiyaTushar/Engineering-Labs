#include <stdio.h>

struct Dist{
    int Feet,Inch;
};

struct Dist FeetAdd(struct Dist, struct Dist);

void main(){
    struct Dist f1,f2,f3;
    printf("Enter the feet of f1: ");
    scanf("%d",&f1.Feet);
    printf("Enter the inches of f1: ");
    scanf("%d",&f1.Inch);
    printf("Enter the feet of f2: ");
    scanf("%d",&f2.Feet);
    printf("Enter the inches of f2: ");
    scanf("%d",&f2.Inch);
    f3=FeetAdd(f1,f2);
    printf("Addition of f1 and f2 is: %d:%d",f3.Feet,f3.Inch);
}

struct Dist FeetAdd(struct Dist f1, struct Dist f2){
    struct Dist f3;
    if(f1.Inch+f2.Inch>12){
        f3.Feet=f1.Feet+f2.Feet+((f1.Inch+f2.Inch)/12);
        f3.Inch=((f1.Inch+f2.Inch)%12);
    }
    else{
        f3.Feet=f1.Feet+f2.Feet;
        f3.Inch= f1.Inch + f1.Inch;
    }
    return f3;
}
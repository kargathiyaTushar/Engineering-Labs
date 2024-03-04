// Question 2:Demonstrate int, float, double, and char pointers 

#include <stdio.h>

void main(){
    int a=10, *ptr_a;
    float b=20, *ptr_b;
    double c=30, *ptr_c;
    char d='A', *ptr_d;
    ptr_a=&a, ptr_b=&b, ptr_c=&c, ptr_d=&d;
    printf("Value of integer a is: %d and Pointer of integer a is: %d\n",a,ptr_a);
    printf("Value of float b is: %f and Pointer of float b is: %d\n",b,ptr_b);
    printf("Value of double c is: %lf and Pointer of double c is: %d\n",c,ptr_c);
    printf("Value of character d is: %c and Pointer of character d is: %d\n",d,ptr_d);
}
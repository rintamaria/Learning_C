/*Using #define, create a constant for the value of Pi (3.14). Write a program that calculates the area of a circle given its radius 
(stored in a variable) and prints the result using the constant for Pi.*/
#include<stdio.h>
#define pi 3.14
int main()
{
    
    float radius=3;
    float result=pi*radius*radius;
    printf("area is %f",result);
}
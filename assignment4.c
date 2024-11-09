/*Write a program that declares an integer variable, assigns it a value of 10, and then converts it to a float variable. 
Print both the integer and float values to show the conversion.*/
#include<stdio.h>
int main()
{
    int a=10;
    printf("integer value of a is %d \n",a);
    float b=(float) a;
    printf("float value of a is %f \n ",b);
    return 0;
}
/*Write a C program that takes an integer input and multiplies it by 
2^n using the left shift operator.*/
#include<stdio.h>
int main()
{
    int num,n;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter n ");
    scanf("%d",&n);
    int result=num<<n;
    printf("result is %d",result);

}
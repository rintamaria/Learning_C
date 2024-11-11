/*Write a C program that takes an integer input and divides it by 2^ n using the right shift operator.*/
#include<stdio.h>
int main()
{
    int num,n;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter n ");
    scanf("%d",&n);
    int result=num>>n;
    printf("result is %d",result);

}
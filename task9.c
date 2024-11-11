/*Develop a C program that reverses the bits of an integer using left shift and right shift operations.*/
#include<stdio.h>
int main()
{
    int num,result;
    printf("enter a number");
    scanf("%d",&num);
    int bitcount=8;
    for(int i=0;i<bitcount;i++)
    {
        result=num<<i;


    }
    printf("number is %d",result);

}
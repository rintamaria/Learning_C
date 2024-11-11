/*Create a C program that performs a circular left shift on an integer.*/
#include<stdio.h>
int main()
{
    int num,result,n;
    printf("enter a number \n");
    scanf("%d",&num);
    int bitcount=32;
    printf("enter how many bits to shift \n");
    scanf("%d",&n);
    result=num<<n | num>>(bitcount-n);
    printf("the result is %d",result);
    
}
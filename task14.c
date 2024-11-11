/*. Develop a C program that uses the right shift operator to create a bitmask that checks if specific bits are set in an integer*/
#include<stdio.h>
int main()
{
    int num=10;
    int n;
    printf("enter the bits to set");
    scanf("%d",&n);
    int mask=1<<n;
    printf("mask is %d",mask);

    int result;
    result=num|mask;
    printf("the result is %d",result);

}
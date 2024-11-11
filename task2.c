// c program to retrieve value of nth bit from a given integer
#include<stdio.h>
int main()
{
    int number;
    printf("enter a number");
    scanf("%d",&number);

    int n;
    printf("enter the bit");
    scanf("%d",&n);
    int result;
    result=number&1<<n;
    if(result)
    {
        printf("the n th bit is 1");
    }
    else
    {
        printf("the nth bit is zero");
    }



}
// c program that toggles the nth bit of a given integer
#include<stdio.h>
int main()
{
    int n,num,result;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter the bit which you want to set to 1");
    scanf("%d",&n);
    result=num^1<<n;
    printf("result is %d",result);

}
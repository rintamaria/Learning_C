// c program that clears the nth bit of given integer
#include<stdio.h>
int main()
{
   
    int n,num,result,mask;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter the bit which you want to clear");
    scanf("%d",&n);
    mask=(1<<n);
    printf("mask is %d",mask);
    int mask2=~mask;
    result=num&mask2;
    printf("result is %d",result);


}
/*. Create a C program that counts how many times you can right shift a number before it becomes zero.*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int count=0;
    while(num>0)
    {
        num=num>>1;
        count=count+1;

    }
    printf("the count is %d",count);
}
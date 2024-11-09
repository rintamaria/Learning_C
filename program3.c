#include<stdio.h>
int main()
{
    int a=5,b=10,c=15;
    printf("addition %d \n ",a+b);
    printf("subtraction %d \n ",a-b);
    printf("multiplication %d \n ",a*b);
    printf("Division %d \n ",a/b);
    int result=a+b*c/b-a;
    printf("the result is %d",result);
    return 0;

}
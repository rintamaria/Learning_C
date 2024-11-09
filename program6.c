//checking odd or even using bitwise operator
#include<stdio.h>
int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    if(a&1)
    {
        printf("odd number");
    }
    else{
        printf("even number");
    }

}
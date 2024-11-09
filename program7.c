#include<stdio.h>
int sum(int,int);
int main()
{
    int a=20;
    int b=30;
    int y=sum(20,30);
    print("sum=%d",y);
    return 0;
}
int sum(int c,int d)
{
   static int sum=0;
    sum=c+d;
    return sum;
}
#include<stdio.h>
int main()
{ int x=2;
int y=++x + x++ + --x;
printf("y is %d",y);
}
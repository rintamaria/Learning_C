/*Write a C program that creates a bitmask with the first n bits set to 1 using the left shift operator.*/
#include<stdio.h>
int main()
{
    int n ,mask=0;
    printf("enter the n bits");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        mask = mask|(1<<i);
    }
    printf("the mask is %d",mask);

    


}
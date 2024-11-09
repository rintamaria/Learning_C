/*Write a program that demonstrates the concept of variable scope by declaring a global variable and modifying it within a function. 
Print the value of the global variable before and after modification.*/
#include<stdio.h>
int globalvar=10;
int modify()
{
    printf("before modification,inside function: %d \n",globalvar);
    globalvar=50;
    printf("afer modification,inside function: %d \n",globalvar);
    return globalvar;

    

}
int main()
{
    printf("outside modify function:%d \n",globalvar);
    modify();
    printf("after calling function, outside modify: %d \n",globalvar);
    return 0;


}
/*Write a program that prompts the user to enter their name and age, stores these values in appropriate variables, 
and then prints a greeting message that includes both the name and age.*/
#include<stdio.h>
int main()
{
    int age;
    char name[10];
    printf("enter your name");
    scanf("%s",name);
    printf("enter your age");
    scanf("%d",&age);
    printf("%s is %d years old",name,age);

}
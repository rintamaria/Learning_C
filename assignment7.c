/*Write a program that uses augmented assignment operators (+=, -=, *=, /=) to perform calculations on an integer variable initialized to 100.
 Print the value after each operation.*/
 #include<stdio.h>
 int main()
 {
    int a=100;
    printf("value of a before operation : %d \n ",a);
    a+=20;
    printf("a after addition :%d \n",a);
    a-=30;
    printf("a after subtraction :%d \n",a);
    a*=2;
    printf("a after multiplication :%d \n",a);
    a/=5;
    printf("a after division :%d \n",a);

 }
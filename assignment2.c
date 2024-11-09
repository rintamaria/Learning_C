//Create a program that swaps the values of two integer variables without using a temporary variable. 
//Demonstrate this by printing the values before and after the swap
#include<stdio.h>
int main()
{
    int a=10;
    int b=30;
    
    printf("The value of a before swap is %d\n", a);
    printf("The value of b before swap is %d\n", b);

    a = a * b;
    b = a / b;
    a = a / b; 

    printf("After swap, a is %d\n", a);
    printf("After swap, b is %d\n", b);

    return 0;
}


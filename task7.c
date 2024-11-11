/*Create a C program that counts how many times you can left shift a number before it overflows 
(exceeds the maximum value for an integer)*/
#include <stdio.h>
#include <limits.h>

int main() {
    int number = 1;  
    int shift_count = 0;
    
    while (number > 0 && number <= INT_MAX / 2) {
        number <<= 1; 
        shift_count++;
    }
    
    printf("You can left shift the number 1 a maximum of %d times before overflow occurs.\n", shift_count);
    
    return 0;
}

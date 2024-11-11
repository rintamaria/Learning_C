/* Write a C program that extracts the last n bits from a given integer using the right shift operator*/
#include <stdio.h>

int main() {
    int num, n;
    
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Enter the number of bits to extract: ");
    scanf("%d", &n);
    
    
    int bits = num & ((1 << n) - 1);
    
    // Output the result
    printf("the result is %d", bits);
    
    return 0;
}


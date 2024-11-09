/*Create an array of integers with five elements. Initialize it with values of your choice, 
then write a program to calculate and print the sum of all elements in the array.*/
#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 6, 8, 10};  
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}

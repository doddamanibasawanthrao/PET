#include <stdio.h>

// Function that accepts two integers and prints their sum
void printSum(int num1, int num2) {
    int sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}

int main() {
    // Calling the function with two numbers
    printSum(5, 7);
    return 0;
}

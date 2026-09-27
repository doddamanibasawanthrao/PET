#include <iostream>

// Function that accepts two integers and prints their sum
void printSum(int num1, int num2) {
    int sum = num1 + num2;
    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;
}

int main() {
    // Calling the function with two numbers
    printSum(12, 18);
    return 0;
}

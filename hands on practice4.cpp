#include <iostream>

int main() {
    int sum = 0; // Initialized to 0 to avoid random memory values
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    std::cout << "Sum = " << sum << "\n";
    return 0;
}

#include <iostream>

int main() {
    // Uses '>=' to include 1 and '--' to safely count down
    for (int i = 10; i >= 1; i--) {
        std::cout << i << "\n";
    }
    return 0;
}

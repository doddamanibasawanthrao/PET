#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // Exits loop cleanly before printing 6
        }
        std::cout << i << "\n";
    }
    return 0;
}

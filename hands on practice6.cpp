#include <iostream>
#include <string>

int main() {
    std::string str = "PYTHON";
    // Modern C++ range-based for loop to completely avoid indexing bugs
    for (char c : str) {
        std::cout << c << "\n";
    }
    return 0;
}

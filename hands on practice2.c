#include <stdio.h>

int main() {
    // Correctly uses '>=' to include 1, and '--' to count downward
    for (int i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    return 0;
}

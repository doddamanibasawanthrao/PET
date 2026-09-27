#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // Breaks instantly before printing 6
        }
        printf("%d\n", i);
    }
    return 0;
}

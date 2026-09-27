#include <stdio.h>

int main() {
    // 1. Start at 2
    // 2. Loop runs up to and including 10 (i <= 10)
    // 3. Skip by 2 each time (i += 2)
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

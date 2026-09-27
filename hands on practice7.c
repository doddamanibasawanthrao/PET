#include <stdio.h>

int main() {
    // Outer loop controls lines, inner loop controls star count per line
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Perfectly breaks to the next line
    }
    return 0;
}

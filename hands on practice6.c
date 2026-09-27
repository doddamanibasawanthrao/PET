#include <stdio.h>

int main() {
    char str[] = "PYTHON";
    // Loops perfectly until the null terminator '\0' is reached
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}

#include <stdio.h>

int main() {
    int decimal, binary = 0, base = 1, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        rem = decimal % 2;
        binary += rem * base;
        base *= 10;
        decimal /= 2;
    }

    printf("The binary equivalent is: %d\n", binary);

    return 0;
}


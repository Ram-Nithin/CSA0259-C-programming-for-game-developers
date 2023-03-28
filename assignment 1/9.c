#include <stdio.h>

int main() {
    int num, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int temp = num; temp != 0; temp /= 10) {
        reverse = (reverse * 10) + (temp % 10);
    }

    printf("The reverse of the number is: %d\n", reverse);

    return 0;
}


#include <stdio.h>

int main() {
    int amount, notes = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 500) {
        notes += amount / 500;
        printf("%d",notes);
        amount %= 500;
    }

    if (amount >= 100) {
        notes += amount / 100;
        printf("%d",notes);
        amount %= 100;
    }

    if (amount >= 50) {
        notes += amount / 50;
        printf("%d",notes);
        amount %= 50;
    }

    if (amount >= 20) {
        notes += amount / 20;
        printf("%d",notes);
        amount %= 20;
    }

    if (amount >= 10) {
        notes += amount / 10;
        printf("%d",notes);
        amount %= 10;
    }

    if (amount >= 5) {
        notes += amount / 5;
        printf("%d",notes);
        amount %= 5;
    }

    if (amount >= 2) {
        notes += amount / 2;
        printf("%d",notes);
        amount %= 2;
    }

    if (amount >= 1) {
        notes += amount / 1;
        printf("%d",notes);
        amount %= 1;
    }


    return 0;
}


#include <stdio.h>

// Define a union for storing an integer or a float value
union Data {
    int i;
    float f;
};

int main() {
    union Data data;

    // Prompt the user to enter a value of their choice
    printf("Enter a value: ");

    // Read the value as an integer or a float, depending on the user's choice
    char choice;
    scanf("%c", &choice);
    if (choice == 'i') {
        scanf("%d", &data.i);
        printf("Value entered: %d\n", data.i);
    } else if (choice == 'f') {
        scanf("%f", &data.f);
        printf("Value entered: %.2f\n", data.f);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}


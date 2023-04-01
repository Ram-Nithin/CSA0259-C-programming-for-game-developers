#include <stdio.h>

#define PI 3.14159

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char shape_type;

    // Prompt the user to enter the type of shape
    printf("Enter the type of shape (c for circle, r for rectangle): ");
    scanf("%c", &shape_type);

    // Prompt the user to enter the appropriate dimensions
    if (shape_type == 'c') {
        printf("Enter the radius of the circle: ");
        scanf("%f", &s.radius);

        // Calculate and print the area of the circle
        float area = PI * s.radius * s.radius;
        printf("Area of the circle: %.2f\n", area);
    }
    else if (shape_type == 'r') {
        printf("Enter the length of the rectangle: ");
        scanf("%f", &s.rectangle.length);

        printf("Enter the width of the rectangle: ");
        scanf("%f", &s.rectangle.width);

        // Calculate and print the area of the rectangle
        float area = s.rectangle.length * s.rectangle.width;
        printf("Area of the rectangle: %.2f\n", area);
    }
    else {
        printf("Invalid shape type.\n");
    }

    return 0;
}


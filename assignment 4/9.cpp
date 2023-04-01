#include <stdio.h>

union student {
    char name[50];
    float gpa;
};

int main() {
    union student s;

    // Prompt the user to enter the student's name and GPA
    printf("Enter the student's name: ");
    scanf("%s", s.name);

    printf("Enter the student's GPA: ");
    scanf("%f", &s.gpa);

    // Print the student's name and GPA
    printf("Student's name: %s\n", s.name);
    printf("Student's GPA: %.2f\n", s.gpa);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Define a structure for a student
struct Student {
    char name[50];
    int roll_number;
    struct tm birthday;
    struct tm admission_date;
};

// Calculate the age of a student given their birthday and the current date
int calculate_age(struct tm birthday, struct tm current_date) {
    int age = current_date.tm_year - birthday.tm_year;
    if (current_date.tm_mon < birthday.tm_mon ||
        (current_date.tm_mon == birthday.tm_mon && current_date.tm_mday < birthday.tm_mday)) {
        age--;
    }
    return age;
}

int main() {
    // Declare a Student structure to store student information
    struct Student student;

    // Accept student information from the user
    printf("Enter student information:\n");

    printf("Name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = 0;  // Remove trailing newline

    printf("Roll number: ");
    scanf("%d", &student.roll_number);

    printf("Birthday (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &student.birthday.tm_year, &student.birthday.tm_mon, &student.birthday.tm_mday);
    student.birthday.tm_year -= 1900;  // Adjust year to be relative to 1900
    student.birthday.tm_mon--;  // Adjust month to be 0-indexed

    printf("Admission date (YYYY/MM/DD): ");
    scanf("%d/%d/%d", &student.admission_date.tm_year, &student.admission_date.tm_mon, &student.admission_date.tm_mday);
    student.admission_date.tm_year -= 1900;  // Adjust year to be relative to 1900
    student.admission_date.tm_mon--;  // Adjust month to be 0-indexed

    // Calculate the age of the student at the time of admission
    time_t t = time(NULL);
    struct tm current_date = *localtime(&t);
    int age = calculate_age(student.birthday, student.admission_date);

    // Display the student information and age at the time of admission
    printf("\nStudent information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_number);
    printf("Birthday: %d/%d/%d\n", student.birthday.tm_year + 1900, student.birthday.tm_mon + 1, student.birthday.tm_mday);
    printf("Admission date: %d/%d/%d\n", student.admission_date.tm_year + 1900, student.admission_date.tm_mon + 1, student.admission_date.tm_mday);
    printf("Age at the time of admission: %d\n", age);

    return 0;
}


#include <stdio.h>
#include <string.h>

// Define a structure for a student
struct Student {
    int roll_no;
    char stud_name[100];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};

int main() {
    int n;

    // Accept number of students
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Accept details of each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Name: ");
        scanf("%s", students[i].stud_name);

        printf("Marks in three subjects: ");
        scanf("%d %d %d", &students[i].mark1, &students[i].mark2, &students[i].mark3);

        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].avg_marks = (float)students[i].total_marks / 3.0;
    }

    // Sort the records in descending order of marks
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (students[j].total_marks > students[i].total_marks) {
                // Swap the records
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Display the records in descending order of marks
    printf("\nStudent details sorted by marks:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].stud_name);
        printf("Marks: %d %d %d\n", students[i].mark1, students[i].mark2, students[i].mark3);
        printf("Total marks: %d\n", students[i].total_marks);
        printf("Average marks: %.2f\n", students[i].avg_marks);
    }

    return 0;
}


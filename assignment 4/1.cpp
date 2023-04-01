#include <stdio.h>

// Define a structure for an employee
struct Employee {
    int id;
    char name[50];
    char designation[50];
    char department[50];
    float salary;
};

int main() {
    // Declare an instance of the Employee structure
    struct Employee emp;

    // Accept the details of the employee from the user
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee designation: ");
    scanf("%s", emp.designation);

    printf("Enter employee department: ");
    scanf("%s", emp.department);

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    // Display the details of the employee
    printf("\nEmployee details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Designation: %s\n", emp.designation);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}


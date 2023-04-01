#include <stdio.h>
#include <string.h>

// Define a structure for an employee
struct Employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n;

    // Accept the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Declare an array of Employee structures to store employee information
    struct Employee employees[n];

    // Accept employee information from the user
    printf("Enter employee information:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].eno);

        printf("Name: ");
        fgets(employees[i].ename, sizeof(employees[i].ename), stdin);
        employees[i].ename[strcspn(employees[i].ename, "\n")] = 0;  // Remove trailing newline

        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Find the employee with the highest salary
    struct Employee highest_salary_employee = employees[0];
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > highest_salary_employee.salary) {
            highest_salary_employee = employees[i];
        }
    }

    // Print the details of the employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("Employee number: %d\n", highest_salary_employee.eno);
    printf("Name: %s\n", highest_salary_employee.ename);
    printf("Salary: %f\n", highest_salary_employee.salary);

    return 0;
}


#include <stdio.h>
#include <string.h>

// Define a structure for a bank customer
struct Customer {
    int account_no;
    char name[50];
    float balance;
};

// Define a function to print the account number and name of customers whose balance is less than 100 Rs
void print_low_balance_customers(struct Customer customers[], int num_customers) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < num_customers; i++) {
        if (customers[i].balance < 100) {
            printf("Account number: %d\n", customers[i].account_no);
            printf("Name: %s\n", customers[i].name);
        }
    }
}

int main() {
    // Declare an array of Customer structures to store customer information
    struct Customer customers[3];

    // Accept customer information from the user
    printf("Enter customer information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Customer %d:\n", i+1);
        printf("Account number: ");
        scanf("%d", &customers[i].account_no);

        printf("Name: ");
        fgets(customers[i].name, sizeof(customers[i].name), stdin);
        customers[i].name[strcspn(customers[i].name, "\n")] = 0;  // Remove trailing newline

        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Print the account number and name of customers whose balance is less than 100 Rs
    print_low_balance_customers(customers, 3);

    return 0;
}


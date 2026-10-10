#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void) {
    int choice;

    do {
        printf("\n==========================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
        printf("==========================================\n");
        printf("1. Add Employee\n");
        printf("2. List Employees\n");
        printf("3. Calculate VAT & Budget\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }
        getchar(); 

        switch(choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                listEmployees();
                break;
            case 3: {
                float amount;
                printf("Enter amount for VAT calculation: ");
                scanf("%f", &amount);
                printf("Calculated VAT (15%%): %.2f\n", calculateVAT(amount));
                break;
            }
            case 4:
                printf("Exiting application. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}
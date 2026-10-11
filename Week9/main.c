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
        printf("4. Save Employee & Budget Data (Text)\n");
        printf("5. Load Employee & Budget Data (Text)\n");
        printf("6. Save Employee Record (Binary)\n");
        printf("7. Load Employee Records (Binary)\n");
        printf("8. Exit\n");
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
                printf("Calculated VAT (15%%): %.2f\n", amount * 0.15);
                break;
            }
            case 4:
                
                saveEmployee(1001, "Maria", 18500.50);
                saveBudget(50000.00, "Infrastructure");
                printf("Text data saved successfully to data/ folder!\n");
                break;
            case 5:
                printf("\n--- Loading Employee Text Records ---\n");
                loadEmployees();
                printf("\n--- Loading Budget Text Records ---\n");
                loadBudgets();
                break;
            case 6: {
                
                Employee sampleEmp = {1002, "Simon", 17200.00};
                saveEmployeeBinary(&sampleEmp);
                printf("Binary employee record saved to data/employees.dat!\n");
                break;
            }
            case 7:
                printf("\n--- Loading Binary Employee Records ---\n");
                loadEmployeesBinary();
                break;
            case 8:
                printf("Exiting application. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please select between 1 and 8.\n");
        }
    } while (choice != 8);

    return 0;
}
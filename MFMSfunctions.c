#include <stdio.h>
#include <string.h>
 
void displayMenu();
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
int searchEmployee(int id, int ids[], int size);

int main() {
    int choice;

    do {
        displayMenu();
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        getchar();

        switch (choice) {
            case 1: {
                float amount;
                printf("Enter amount: ");
                scanf("%f", &amount);
                printf("VAT: %.2f\n", calculateVAT(amount));
                break;
            }
            case 2: {
                float basic, housing, transport;
                printf("Basic salary: ");
                scanf("%f", &basic);
                printf("Housing allowance: ");
                scanf("%f", &housing);
                printf("Transport allowance: ");
                scanf("%f", &transport);
                printf("Gross salary: %.2f\n", calculateSalary(basic, housing, transport));
                break;
            }
            case 3: {
                float revenue, expenses, balance;
                printf("Enter revenue: ");
                scanf("%f", &revenue);
                printf("Enter expenses: ");
                scanf("%f", &expenses);
                
                balance = calculateBudget(revenue, expenses);
                if (balance > 0) {
                    printf("SURPLUS (Balance: %.2f)\n", balance);
                } else if (balance < 0) {
                    printf("DEFICIT (Balance: %.2f)\n", balance);
                } else {
                    printf("BALANCED\n");
                }
                break;
            }
            case 4: {
                int employeeIDs[] = {101, 102, 103, 104, 105};
                int size = 5;
                int searchID;

                printf("Enter employee ID: ");
                scanf("%d", &searchID);

                int position = searchEmployee(searchID, employeeIDs, size);
                if (position != -1) {
                    printf("Employee found at position %d.\n", position);
                } else {
                    printf("Employee not found.\n");
                }
                break;
            }
            case 5: {
            
                char supplierName[100];
                char email[100];
                char phone[30];
                char town[50];

                getchar(); 
                printf("Enter supplier name: ");
                fgets(supplierName, sizeof(supplierName), stdin);
                supplierName[strcspn(supplierName, "\n")] = '\0';

                printf("Enter email: ");
                fgets(email, sizeof(email), stdin);
                email[strcspn(email, "\n")] = '\0';

                printf("Enter phone: ");
                fgets(phone, sizeof(phone), stdin);
                phone[strcspn(phone, "\n")] = '\0';

                printf("Enter town: ");
                fgets(town, sizeof(town), stdin);
                town[strcspn(town, "\n")] = '\0';

                printf("\n--- SUPPLIER DETAILS ---\n");
                printf("Name: %s (Length: %zu)\n", supplierName, strlen(supplierName));
                printf("Email: %s\n", email);
                printf("Phone: %s\n", phone);
                printf("Town: %s\n", town);
                break;
            }
            case 6:
                printf("Exiting application. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

void displayMenu() {
    printf("\n==========================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("==========================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Supplier Management\n");
    printf("6. Exit\n");
    printf("Enter choice: ");
}

float calculateVAT(float amount) {
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport) {
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses) {
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size) {
    for (int i = 0; i < size; i++) {
        if (ids[i] == id) {
            return i; 
        }
    }
    return -1; 
}
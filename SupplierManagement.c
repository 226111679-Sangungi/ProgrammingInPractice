#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char supplierName[100] = "ABC Office Supplies";
    char email[100] = "sales@abc.com";
    char phone[30] = "0611234567";
    char town[50] = "Windhoek";
    char searchName[100];
    char backup[100];
    char description[200];

    do {
        printf("\n==================================\n");
        printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf(" Week 7: Supplier Module\n");
        printf("==================================\n");
        printf("1. Enter/Update Supplier Details\n");
        printf("2. Display Supplier Details & Lengths\n");
        printf("3. Search Supplier (strcmp)\n");
        printf("4. Backup Supplier Name (strcpy)\n");
        printf("5. Construct Description (strcat)\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // clear input buffer
            continue;
        }
        getchar(); // clear newline character from buffer

        switch(choice) {
            case 1:
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
                
                printf("Supplier details updated successfully!\n");
                break;

            case 2:
                printf("\n--- SUPPLIER DETAILS & LENGTHS ---\n");
                printf("Name:  %s (Length: %zu)\n", supplierName, strlen(supplierName));
                printf("Email: %s (Length: %zu)\n", email, strlen(email));
                printf("Phone: %s\n", phone);
                printf("Town:  %s (Length: %zu)\n", town, strlen(town));
                break;

            case 3:
                printf("Enter supplier name to search: ");
                fgets(searchName, sizeof(searchName), stdin);
                searchName[strcspn(searchName, "\n")] = '\0';

                if (strcmp(supplierName, searchName) == 0) {
                    printf("Result: Supplier '%s' found in records.\n", searchName);
                } else {
                    printf("Result: Supplier not found.\n");
                }
                break;

            case 4:
                strcpy(backup, supplierName);
                printf("Supplier name successfully copied!\n");
                printf("Original: %s\n", supplierName);
                printf("Backup:   %s\n", backup);
                break;

            case 5:
                strcpy(description, supplierName);
                strcat(description, " operates in ");
                strcat(description, town);
                printf("\nConstructed Description Sentence:\n%s\n", description);
                break;

            case 6:
                printf("Exiting Week 7 Module. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please choose between 1 and 6.\n");
        }
    } while(choice != 6);

    return 0;
}
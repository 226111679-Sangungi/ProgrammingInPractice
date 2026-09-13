#include <stdio.h>

int main(){

    char supplierName;
    double supplierPrice;
    double budget;
    int status;
    int documents, isLowestPrice = 0;

    printf("Enter Supplier Name: ");
    scanf("%s", supplierName);

    printf("Enter supplier price: ");
    scanf("%f", &supplierPrice);

    printf("Enter Budget: ");
    scanf("%f", budget);

    printf("Enter registration status: (Yes=1,No=0)");
    scanf("%d", &status);

    printf("Completion of Documents?: (Yes=1,No=0)");
    scanf("%d", &documents);

    printf("Is this the lowest price? (Yes=1,No=0)");
    scanf("%d", &isLowestPrice);


     if (status == 1 && documents == 1 && supplierPrice <= budget) {
        if (isLowestPrice == 1) {
            printf("%s is a PREFERRED SUPPLIER.\n", supplierName);
        } else {
            printf("%s is QUALIFIED.\n", supplierName);
        }

    } else {
        printf("%s is DISQUALIFIED.\n", supplierName);
    }

    return 0;
}

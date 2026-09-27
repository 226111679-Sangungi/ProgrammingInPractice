#include <stdio.h>
#include <string.h>

int main(){
    int i, j;
    float salaries[50];
    float totalSalary = 0.0, averageSalary = 0.0;
    float highestSalary, lowestSalary, targetSalary;
    int foundCount = 0;

    for (i = 0; i < 50; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / 50.0;

    highestSalary = salaries[0];
    lowestSalary = salaries[0];

    for (i = 1; i < 50; i++) {
        if (salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }
        if (salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }

    printf("Average salary: %.2f\n", averageSalary);
    printf("Highest salary: %.2f\n", highestSalary);
    printf("Lowest salary: %.2f\n", lowestSalary);

    printf("Enter a target salary to search for: ");
    scanf("%f", &targetSalary);

    for (i = 0; i < 50; i++) {
        if (salaries[i] == targetSalary) {
            foundCount = 1;
            break;
        }
    }

    if (foundCount > 0) {
        printf("Target salary %.2f found in the list.\n", targetSalary);
    } else {
        printf("Target salary %.2f not found in the list.\n", targetSalary);
    }

    // Part B

    float budgets[10];
    float totalBudget = 0.0, averageBudget = 0.0;
    float tempBudget;

    for (i = 0; i < 10; i++) {
        printf("Enter budget for department %d: ", i + 1);
        scanf("%f", &budgets[i]);
        totalBudget += budgets[i];
    }

    averageBudget = totalBudget / 10.0;
    printf("Total budget: %.2f\n", totalBudget);
    printf("Average budget: %.2f\n", averageBudget);

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (budgets[j] > budgets[j + 1]) {
                tempBudget = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = tempBudget;
            }
        }
    }

    printf("Budgets in ascending order:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", budgets[i]);
    }

    // Part C

    char registrations[20][20];
    char targetRegistration[20];
    int registrationFound = 0;

    for (i = 0; i < 20; i++) {
        printf("Enter registration number %d: ", i + 1);
        scanf("%s", registrations[i]);
    }

    printf("Enter the registration number to search for: ");
    scanf("%s", targetRegistration);

    for (i = 0; i < 20; i++) {
        if (strcmp(registrations[i], targetRegistration) == 0) {
            registrationFound = 1;
            break;
        }
    }

    if (registrationFound) {
        printf("Registration number %s found in the list.\n", targetRegistration);
    } else {
        printf("Registration number %s not found in the list.\n", targetRegistration);
    }

    return 0;
}




#include <stdio.h>
#include <string.h>

int main(void)
{
    char municipality[50];
    char mayor[50];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Welcome to Windhoek Municipality\n\n");

    // 1. Get Municipality Name (handles spaces like "Walvis Bay")
    printf("Enter Municipality Name: ");
    if (fgets(municipality, sizeof(municipality), stdin) != NULL) {
        municipality[strcspn(municipality, "\n")] = '\0'; // Remove trailing newline
    }

    // 2. Get Mayor Name
    printf("Enter Mayor: ");
    if (fgets(mayor, sizeof(mayor), stdin) != NULL) {
        mayor[strcspn(mayor), "\n"] = '\0'; // Remove trailing newline
    }

    // 3. Get Population
    printf("Enter Population: ");
    scanf("%d", &population);

    // Clear leftover newline from scanf buffer
    while (getchar() != '\n');

    // Output Results
    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", municipality);
    printf("Mayor        : %s\n", mayor);
    printf("Population   : %d\n", population);

    return 0;
}
#include <stdio.h>
#include "budget.h"

float calculateVAT(float amount) {
    return amount * 0.15f; // 15% VAT calculation
}
void saveBudget(double amount, const char *category)
{
    FILE *fp = fopen("data/budgets.txt", "a");
    fprintf(fp, "%.2f|%s\n", amount, category);
    fclose(fp);
}

void loadBudgets(void)
{
    FILE *fp = fopen("data/budgets.txt", "r");
    if (fp == NULL) return;

    double amount;
    char category[50];

    while (fscanf(fp, "%lf|%49[^\n]\n", &amount, category) == 2)
    {
        printf("Budget -> Amount: %.2f | Category: %s\n", amount, category);
    }
    fclose(fp);
}
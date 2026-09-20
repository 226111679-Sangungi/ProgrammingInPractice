#include <stdio.h>

int main() {
    
    double revenue, expenses, balance;
    
   
    int departments;
    double payroll;
    double procurement;
    double assets;

    
    printf("========================================\n");
    printf("      MUNICIPAL BUDGET CALCULATOR\n");
    printf("========================================\n\n");

    
    printf("Enter Total Revenue: ");
    scanf("%lf", &revenue);
    
    printf("Enter Total Expenses: ");
    scanf("%lf", &expenses);

    
    balance = revenue - expenses;

    
    printf("\n--- Additional Financial Data ---\n");
    printf("Enter number of departments: ");
    scanf("%d", &departments);
    
    printf("Enter total payroll: ");
    scanf("%lf", &payroll);
    
    printf("Enter total procurement costs: ");
    scanf("%lf", &procurement);
    
    printf("Enter total value of assets: ");
    scanf("%lf", &assets);

        printf("\n========================================\n");
    printf("      MUNICIPAL FINANCIAL SUMMARY\n");
    printf("========================================\n");
    printf("Total Revenue      : %.2f\n", revenue);
    printf("Total Expenses     : %.2f\n", expenses);
    printf("Budget Balance     : %.2f\n", balance);
    printf("----------------------------------------\n");
    printf("Number of Depts    : %d\n", departments);
    printf("Total Payroll      : %.2f\n", payroll);
    printf("Procurement Costs  : %.2f\n", procurement);
    printf("Total Assets       : %.2f\n", assets);
    printf("========================================\n");

    return 0;
} 
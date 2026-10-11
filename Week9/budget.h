#ifndef BUDGET_H
#define BUDGET_H

float calculateVAT(float amount);
void saveBudget(double amount, const char *category);
void loadBudgets(void);

#endif
#include <stdio.h>
int main(){
    
    double salary;
    double totalSalary = 0.0;
    double averageSalary = 0.0;
    double highestSalary;
    double lowestSalary;

    for (int i = 1; i < 50; i++) {
        printf("Enter salary for employee %d: ", i);
        scanf("%lf", &salary);

        totalSalary += salary;

        if (i == 0) {
            highestSalary = salary;
            lowestSalary = salary;
        } else {
            if (salary > highestSalary) {
                highestSalary = salary;
            }
            if (salary < lowestSalary) {
                lowestSalary = salary;
            }
        }
    }
    averageSalary = totalSalary / 50;

    printf("Total Salary: $%.2lf\n", totalSalary);
    printf("Average Salary: $%.2lf\n", averageSalary);
    printf("Highest Salary: $%.2lf\n", highestSalary);
    printf("Lowest Salary: $%.2lf\n", lowestSalary);

    return 0;
}
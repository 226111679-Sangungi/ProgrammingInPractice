#include <stdio.h>

int main(){

    float basicSalary;
    float housing;
    float transport;
    float tax;
    float grossSalary;
    float netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housing);
     
    printf("Enter Transport Allowance: ");
    scanf("%f", &transport);

    printf("Enter Tax: ");
    scanf("%f", &tax);

    grossSalary=basicSalary+housing+transport;
    
    netSalary=grossSalary-tax;

    printf("Gross Salary: %.2f\n ", grossSalary);
    printf("Net Salary: %.2f\n ", netSalary);

    return 0;
}
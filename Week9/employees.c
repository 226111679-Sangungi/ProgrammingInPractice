#include <stdio.h>
#include "employees.h"

void addEmployee(void) {
    printf("Executing: Add Employee module...\n");
}

void listEmployees(void) {
    printf("Executing: Listing employees...\n");
}
void saveEmployee(int id, const char *name, double salary)
{
    
    FILE *fp = fopen("data/employees.txt", "a");

    
    fprintf(fp, "%d|%s|%.2f\n", id, name, salary);

    
    fclose(fp);
}
void loadEmployees(void)
{
    FILE *fp = fopen("data/employees.txt", "r");
    if (fp == NULL) return;

    int id;
    char name[50];
    double salary;

    while (fscanf(fp, "%d|%49[^|]|%lf\n", &id, name, &salary) == 3)
    {
        printf("ID: %d | Name: %s | Salary: %.2f\n", id, name, salary);
    }

    fclose(fp);
}
void saveEmployeeBinary(const Employee *e)
{
    FILE *fp = fopen("data/employees.dat", "ab");
    if (fp == NULL) {
        perror("data/employees.dat");
        return;
    }
    
    size_t written = fwrite(e, sizeof(*e), 1, fp);
    if (written != 1) {
        perror("Error writing employee binary record");
    }
    
    fclose(fp);
}

void loadEmployeesBinary(void)
{
    FILE *fp = fopen("data/employees.dat", "rb");
    if (fp == NULL) {
        perror("data/employees.dat");
        return;
    }

    Employee emp;
    while (fread(&emp, sizeof(emp), 1, fp) == 1) {
        printf("Binary Record -> ID: %d | Name: %s | Salary: %.2f\n", emp.id, emp.name, emp.salary);
    }
    fclose(fp);
}
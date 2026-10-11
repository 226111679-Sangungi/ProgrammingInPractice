#ifndef EMPLOYEES_H
#define EMPLOYEES_H

void addEmployee(void);
void listEmployees(void);
void saveEmployee(int id, const char *name, double salary);
void loadEmployees(void);
typedef struct {
    int id;
    char name[50];
    double salary;
} Employee;

void saveEmployeeBinary(const Employee *e);
void loadEmployeesBinary(void);

#endif
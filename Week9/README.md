Municipal Financial Management System (MFMS) - Week 9

A modular, multi-file C implementation of the Municipal Financial Management System, structured for separate compilation.

Project Structure & Modules

main.c: Coordinates application flow, user menus, and execution loops.
employees.c / employees.h: Handles employee records, additions, and listings.
budget.c / budget.h: Handles financial calculations, including VAT and budget summaries.
utilities.c / utilities.h: Provides helper functions, such as input buffer clearing.
reports.c / reports.h: Generates and formats operational summary reports.

 Compilation and Execution

To compile each source file separately into object files and link them together, run the following commands in your terminal:

1. Compile Source Files Individually
```bash
gcc -std=c99 -Wall -Wextra -pedantic -c main.c
gcc -std=c99 -Wall -Wextra -pedantic -c employees.c
gcc -std=c99 -Wall -Wextra -pedantic -c budget.c
gcc -std=c99 -Wall -Wextra -pedantic -c utilities.c
gcc -std=c99 -Wall -Wextra -pedantic -c reports.c
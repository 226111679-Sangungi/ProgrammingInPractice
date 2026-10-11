#include <stdio.h>
#include "utilities.h"

void clearInputBuffer(void) {
    while (getchar() != '\n');
}

#include "main.h"

void _puts(char *str) {
    while (*str != '\0') {
        write(STDOUT_FILENO, str, 1);
        str++;
    }
    write(STDOUT_FILENO, "\n", 1);
}

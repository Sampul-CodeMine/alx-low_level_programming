#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct valid_print_formats - Structure for print formats
 * @format: parameter
 * @func: function to execute
 */
typedef struct valid_print_formats
{
        char *format;
        void (*func)();
} print_formats;

int _putchar(int);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char *const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */

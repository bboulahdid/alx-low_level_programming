#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - a struct defining a printf function
 *
 * @type: the type of the arg to print
 * @print_func: the function to use to print the arg
 */
typedef struct print_t
{
	char *type;
	void (*print_func)(va_list variadic_list);
} print_t;

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */


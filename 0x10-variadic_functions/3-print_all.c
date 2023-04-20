#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_int - prints an int
 *
 * @variadic_list: a list of arguments
 *
 * Return: void
 */
void print_int(va_list variadic_list)
{
	printf("%d", va_arg(variadic_list, int));
}

/**
 * print_flaot - prints a float
 *
 * @variadic_list: a list of arguments
 *
 * Return: void
 */
void print_flaot(va_list variadic_list)
{
	float f = va_arg(variadic_list, double);

	printf("%f", f);
}

/**
 * print_char - prints a char
 *
 * @variadic_list: a list of arguments
 *
 * Return: void
 */
void print_char(va_list variadic_list)
{
	char c = va_arg(variadic_list, int);

	printf("%c", c);
}

/**
 * print_string - prints a string
 *
 * @variadic_list: a list of arguments
 *
 * Return: void
 */
void print_string(va_list variadic_list)
{
	char *str = va_arg(variadic_list, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	print_t p_funcs[] = {
			{"i", print_int},
			{"f", print_flaot},
			{"c", print_char},
			{"s", print_string}};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4 && (*(p_funcs[j].type) != *(format + i)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			p_funcs[j].print_func(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}


#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: a number
 *
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	n = (n < 0) ? n * -1 : n;

	_putchar('0' + (n % 10));

	return (n % 10);
}


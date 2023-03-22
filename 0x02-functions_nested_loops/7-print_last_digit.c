#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: a number
 *
 * Return: the last digit of a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	last_digit = (last_digit < 0) ? last_digit * -1 : last_digit;
	_putchar('0' + last_digit);
	return (last_digit);
}


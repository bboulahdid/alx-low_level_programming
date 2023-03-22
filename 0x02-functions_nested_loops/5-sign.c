#include "main.h"

/**
 * print_sign - Prints the number's sign
 * @n: number to check
 *
 * Return: 1 if the # is +, 0 if it's 0 & -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


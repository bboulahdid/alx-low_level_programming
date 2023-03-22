#include "main.h"

/**
 * _abs - Get the absolute value of a number
 * @n: a number
 *
 * Return: the absolute value of a number
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (0);
}


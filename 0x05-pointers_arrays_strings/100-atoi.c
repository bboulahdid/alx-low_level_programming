#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 *
 * @s: the string to convert pointer
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');

		else if (result > 0)
			break;

	} while (*s++);

	return (result * sign);
}

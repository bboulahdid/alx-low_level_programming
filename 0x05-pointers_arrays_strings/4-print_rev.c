#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: a char pointer
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}


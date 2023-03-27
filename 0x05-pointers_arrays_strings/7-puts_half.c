#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: a char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


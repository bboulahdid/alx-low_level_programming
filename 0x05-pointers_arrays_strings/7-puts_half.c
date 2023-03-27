#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: a char pointer
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, startingPoint, i;

	while (str[length] != '\0')
		length++;

	startingPoint = length % 2 == 0 ? (length / 2) : ((length + 1) / 2);

	for (i = startingPoint; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

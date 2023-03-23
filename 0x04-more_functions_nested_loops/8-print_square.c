#include "main.h"

/**
 * print_square - Prints a square, followed by a new line
 * @size: the size of the square
 * Return: void
 */

void print_square(int size)
{
	int rows, cols;

	if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


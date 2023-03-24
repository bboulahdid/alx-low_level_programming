#include <stdio.h>

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			putchar(' ');

		for (j = 1; j <= i; j++)
			putchar('#');

		if (i != size)
			putchar('\n');
	}
	putchar('\n');
}

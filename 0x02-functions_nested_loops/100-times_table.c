#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * (nothing if n > 15 or n < 0)
 * @n: a number
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0' + result);
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (result / 100));
				_putchar('0' + ((result / 10) % 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}


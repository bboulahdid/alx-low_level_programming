#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
				_putchar('0' + result);
			else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}


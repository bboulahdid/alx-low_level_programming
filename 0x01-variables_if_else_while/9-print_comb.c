#include <stdio.h>
#define SPACE_ASCII 32
#define COMMA_ASCII 44

/**
 * main - Prints all the numbers of base 16 in lowercase
 * (0123456789abcdef) using `putchar`
 *
 * Return: Always 0
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(COMMA_ASCII);
			putchar(SPACE_ASCII);
		}
		number++;
	}
	putchar('\n');

	return (0);
}


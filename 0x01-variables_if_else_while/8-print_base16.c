#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * (0123456789abcdef) using `putchar`
 *
 * Return: Always 0
 */
int main(void)
{
	char number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}


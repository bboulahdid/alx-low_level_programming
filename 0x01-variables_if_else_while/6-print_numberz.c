#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int number = 48;

	do {
		putchar(number);
		number++;
	} while (number <= 57);

	putchar('\n');

	return (0);
}


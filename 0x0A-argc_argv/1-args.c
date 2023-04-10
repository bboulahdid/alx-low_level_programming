#include <stdio.h>

/**
 * main - prints the program's name, followed by a new line
 *
 * @argc: The # of arguments
 * @argv: An array of arguments
 *
 * Return: Always o.
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}


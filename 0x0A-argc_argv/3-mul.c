#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two numbers
 *
 * @argc: The # of arguments
 * @argv: An array of arguments
 *
 * Return: Always the result of the multiplication
 * or 1 if the number args is different han 2
 */
int main(int argc, char *argv[])
{
	int result;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}

